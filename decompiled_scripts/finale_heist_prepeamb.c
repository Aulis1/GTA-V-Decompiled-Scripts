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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<9> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_53[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_100 = 0;
	var uLocal_101[2] = { 0, 0 };
	float fLocal_104 = 0f;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	struct<67> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203 = 0;
	struct<261> Local_204[4];
	char* sLocal_1249[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1263 = NULL;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	int iLocal_1266 = 0;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	char* sLocal_1272 = NULL;
	var uLocal_1273 = 16;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	int* iLocal_1438 = NULL;
	var uLocal_1439 = 0;
	int iLocal_1440 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_43 = 145;
	iLocal_100 = -1;
	fLocal_104 = 0f;
	Local_106 = { 0f, 0f, 0f };
	Local_110 = { 0f, 0f, 0f };
	fLocal_113 = 0f;
	iLocal_203 = 1;
	sLocal_1263 = "";
	iLocal_1266 = -1;
	iLocal_1269 = -1;
	iLocal_1271 = -1;
	if (!func_264(31))
	{
		iLocal_37 = Global_112293.f_10047.f_128;
		if (iLocal_37 == 2)
		{
			MISC::SET_BIT(&iLocal_105, 10);
			Local_110 = { func_263(25) };
			fLocal_113 = func_262(25);
			if (func_261(&Local_114, 25))
			{
				if (!MISC::IS_BIT_SET(iLocal_105, 14))
				{
					MISC::SET_BIT(&iLocal_105, 14);
				}
			}
		}
		else if (iLocal_37 == 1)
		{
		}
	}
	else
	{
		func_259("AM_H_PREP8", 2, 0, -1, 10000, 7, 0, 0, 0);
		Global_112293.f_10047.f_128 = iLocal_37;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_250(0);
			func_249();
			func_247(31, 1);
		}
		else
		{
			func_249();
			func_247(31, 0);
		}
	}
	func_242(2);
	Local_106 = { -166.1555f, -621.9833f, 31.4281f };
	while (true)
	{
		if (func_241(85))
		{
			func_237("AM_H_PREP8", 1);
			func_247(31, 0);
		}
		if (func_236(PLAYER::PLAYER_PED_ID()))
		{
			func_229();
			func_221();
			func_220();
			func_209();
			switch (iLocal_37)
			{
				case 0:
					func_170();
					break;
				
				case 1:
					func_137();
					break;
				
				case 2:
					func_136();
					break;
				
				case 3:
					func_129();
					break;
				
				case 4:
					func_16(34);
					break;
				
				case 5:
					break;
				
				default:
					break;
			}
			func_7();
		}
		else
		{
			func_1(46, 1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!func_2(func_3(iParam0)) && !Global_110933) && !MISC::IS_BIT_SET(iLocal_105, 15))
			{
				MISC::SET_BIT(&iLocal_105, 15);
				HUD::CLEAR_HELP(true);
			}
		}
		else if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_110933) && !MISC::IS_BIT_SET(iLocal_105, 15))
		{
			MISC::SET_BIT(&iLocal_105, 15);
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_2(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_3(int iParam0)
{
	return sLocal_53[iParam0];
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	MISC::CLEAR_BIT(&(uLocal_101[func_5(iParam0)]), iVar0);
}

int func_5(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_6(int iParam0)
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

void func_7()
{
	if (((MISC::IS_BIT_SET(iLocal_105, 0) && !MISC::IS_BIT_SET(iLocal_105, 1)) && !MISC::IS_BIT_SET(iLocal_105, 14)) && func_13())
	{
		if (func_12(0, 172, 0) || func_12(0, 173, 0))
		{
			iLocal_1271 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_1271 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1271) < 200)
			{
				iLocal_43 = func_8();
			}
			else
			{
				iLocal_1271 = -1;
			}
		}
	}
	else
	{
		iLocal_43 = 145;
		iLocal_1271 = -1;
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0;
	iVar3 = 145;
	if (Global_77248)
	{
		iVar3 = 145;
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19779) == 1)
	{
		if (func_11())
		{
			if (func_10())
			{
				iVar6 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19779, "GET_CURRENT_SELECTION");
				iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iVar4 = MISC::GET_GAME_TIMER();
				while ((!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0) && iVar6 == 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19779) == 1)
				{
					SYSTEM::WAIT(0);
					iVar5 = MISC::GET_GAME_TIMER();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar0);
				if (iVar1 > func_9() || iVar1 < 0)
				{
					iVar1 = func_9();
				}
				iVar2 = Global_19804[iVar1];
				iVar3 = iVar2;
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19779) == 0)
				{
					iVar3 = 145;
				}
				if (iVar6 == 1)
				{
					iVar3 = 145;
				}
			}
			else
			{
				iVar3 = 145;
			}
		}
		else
		{
			iVar3 = 145;
		}
	}
	else
	{
		iVar3 = 145;
	}
	return iVar3;
}

int func_9()
{
	if (Global_31345 == 0 || Global_31345 == 2)
	{
		return 175;
	}
	return 161;
}

int func_10()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
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

int func_13()
{
	if (func_15(0) && func_14())
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7668, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_16(int iParam0)
{
	func_109();
	if (iLocal_40 == 0)
	{
		switch (iLocal_41)
		{
			case 0:
				func_108(1);
				iLocal_1267 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_1268 = MISC::GET_GAME_TIMER() + 3000;
				if (!MISC::IS_BIT_SET(iLocal_105, 10))
				{
					func_92();
				}
				func_91(iParam0, 1);
				iLocal_41 = 1;
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() > iLocal_1268)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1267))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1267, "SHOW_MISSION_PASSED_MESSAGE");
						func_90("M_FB4P3_P");
						func_90("M_FB4P3");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1268 = MISC::GET_GAME_TIMER() + 10000;
						func_88(0);
						iLocal_41 = 2;
					}
				}
				break;
			
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1267) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
				{
					if (MISC::GET_GAME_TIMER() < iLocal_1268)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1267, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_1268 + 100)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1267, "TRANSITION_OUT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1268 = (iLocal_1268 - 100);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_1268 + 500)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1267, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_41 = 3;
					}
				}
				break;
			
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1267))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1267);
				}
				func_108(0);
				if (iLocal_42 == 2)
				{
					func_87(108, 0);
				}
				if (func_85(iLocal_109))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_109, 1);
				}
				func_81("M_FHPE", func_82());
				func_78(2, 0);
				break;
			}
	}
	func_17();
}

void func_17()
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(iLocal_105, 2))
	{
		if (!func_77(0f, 0f, 0f, Local_110, 0))
		{
			if (func_76(PLAYER::PLAYER_PED_ID(), Local_110, 100f) && !func_75())
			{
				if (func_85(func_74(25)))
				{
					iLocal_109 = func_74(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_109, true, true);
					if (func_85(iLocal_109))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iLocal_109, "GetawayVehicleValid"))
						{
							if (DECORATOR::DECOR_SET_BOOL(iLocal_109, "GetawayVehicleValid", true))
							{
							}
						}
						MISC::SET_BIT(&iLocal_105, 0);
						MISC::SET_BIT(&iLocal_105, 2);
					}
				}
				else if (!func_73(25, 0))
				{
					if (!func_85(func_74(25)))
					{
						func_68(1);
					}
				}
			}
			else if (func_85(iLocal_109))
			{
				if (!func_76(PLAYER::PLAYER_PED_ID(), Local_110, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!func_77(0f, 0f, 0f, Local_110, 0))
		{
			if (!func_76(PLAYER::PLAYER_PED_ID(), Local_110, 100f))
			{
				if (func_85(iLocal_109))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_109, false))
					{
						func_21(iLocal_109, Local_110, fLocal_113, 25, 1);
						MISC::CLEAR_BIT(&iLocal_105, 2);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_109, false);
						func_20(&iLocal_109);
						MISC::CLEAR_BIT(&iLocal_105, 0);
					}
					else
					{
						func_68(0);
					}
				}
				else if (!func_73(25, 0))
				{
					func_68(1);
				}
			}
			else if (!func_73(25, 0))
			{
				if (!func_85(iLocal_109))
				{
					func_68(1);
				}
			}
			else if (!func_85(iLocal_109))
			{
				iVar0 = func_74(25);
				if (func_85(iVar0) && iVar0 != iLocal_109)
				{
					iLocal_109 = iVar0;
				}
			}
		}
		func_18();
	}
}

void func_18()
{
	if (MISC::IS_BIT_SET(iLocal_105, 2) && MISC::IS_BIT_SET(iLocal_105, 0))
	{
		if (func_85(iLocal_109))
		{
			if (func_19(PLAYER::PLAYER_PED_ID(), iLocal_109, 10f, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_109, true), Local_110) >= 100f)
				{
					func_68(0);
				}
			}
		}
		else if (!func_73(25, 0))
		{
			if (func_85(iLocal_109))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_109, false);
			}
			func_20(&iLocal_109);
			func_68(1);
		}
	}
}

bool func_19(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_20(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_21(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_76066.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_76066.f_484[25], false))
			{
				if (Global_76066.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_67(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_62(iParam0, &Var0);
		if (func_77(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_77054 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_56(iParam5, &Var0, Param1, fParam4, func_61(iParam0));
		func_22(iParam5, iParam0, 0);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_52(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_76066.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_76066.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_76066.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_76973 != -1 && Global_76973 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_112293.f_32747.f_4801 = func_41();
			}
			if (iParam1 != Global_76066.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_74(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_23(iVar0, 145);
					}
				}
				Global_76972 = iParam1;
				Global_76973 = iParam0;
				Global_76974 = iParam2;
			}
		}
	}
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_24(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_112293.f_2361.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_112293.f_32747.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_112293.f_32747.f_5590 = iParam1;
	Global_76971 = iParam0;
	Global_112293.f_32747.f_5588 = 1;
	func_62(iParam0, &(Global_112293.f_32747.f_5510));
}

int func_24(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_39(iParam0, 0, 0)) || func_39(iParam0, 1, 0)) || func_39(iParam0, 2, 0)) || func_61(iParam0) != 145) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || !func_25(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_37(iParam0))
		{
		}
		if (func_37(iParam0))
		{
		}
		if (func_39(iParam0, 0, 0))
		{
		}
		if (func_39(iParam0, 1, 0))
		{
		}
		if (func_39(iParam0, 2, 0))
		{
		}
		if (func_61(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_25(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_26(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_34())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_33() && !func_32()) && !func_31()) && !func_30()) && !func_34())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_31())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_29(iParam0))
		{
			return 0;
		}
	}
	if (!func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_28())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_28()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_30()
{
	return 0;
}

int func_31()
{
	return 1;
}

int func_32()
{
	return 1;
}

int func_33()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_26(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96731[iVar0]))
		{
			if (Global_96731[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96701[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96701[iVar0], false))
			{
				if (Global_96701[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96701[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_76066.f_484[24]))
	{
		if (iParam0 == Global_76066.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_76066.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_76066.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_40(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_112293.f_7227[iVar9], 0))
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

int func_40(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_41()
{
	var uVar0;
	
	func_51(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_50(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_49(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_44(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_43(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_42(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_42(var uParam0, int iParam1)
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

void func_43(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_48(*uParam0);
	iVar1 = func_46(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_45(int iParam0, int iParam1)
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

var func_46(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_47(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_47(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_48(var uParam0)
{
	return uParam0 & 15;
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_52(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
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
			uParam0->f_4 = func_53(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_53(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_53(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_53(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_53(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_53(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_53(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_53(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_53(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
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
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
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
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
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
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_34())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_34())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112293.f_32747.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_77(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112293.f_32747.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112293.f_32747.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_77(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_77(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_55(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_54(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_54(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
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
			iVar0 = joaat("tailgater");
			if (Global_112293.f_9083.f_99.f_58[128] && !Global_112293.f_9083.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
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
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_112293.f_9083.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_112293.f_9083.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
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

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_52(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_76066.f_555[0 /*21*/].f_9, 10))
		{
			func_60(iParam0);
			func_59(uParam1, &(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]));
			if (MISC::IS_BIT_SET(Global_76066.f_555[0 /*21*/].f_9, 11))
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_57(iParam0, 1);
		}
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_73(iParam0, 0))
		{
			func_58(iParam0, 1, 0);
			func_58(iParam0, 2, 0);
			func_58(iParam0, 3, 0);
			func_58(iParam0, 4, 0);
			func_58(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_58(iParam0, 0, 0);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_112293.f_32747[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112293.f_32747[iParam0]), iParam1);
	}
}

void func_59(var uParam0, var uParam1)
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

void func_60(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_52(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_76066.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_76066.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_76066.f_139[iParam0]));
			Global_76066.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			func_57(iParam0, 0);
		}
	}
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96701[iVar0]))
		{
			if (Global_96701[iVar0] == iParam0)
			{
				return Global_96711[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_66(uParam1);
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
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_65(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_64(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_63(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_63(int iParam0)
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

int func_64(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
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
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
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

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_66(var uParam0)
{
	int iVar0;
	
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

void func_67(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_60(iParam0);
	func_57(iParam0, 0);
}

void func_68(bool bParam0)
{
	if (MISC::IS_BIT_SET(iLocal_105, 14))
	{
		if (func_70(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				func_69(10);
			}
			else
			{
				func_69(12);
			}
		}
		else if (bParam0)
		{
			func_69(11);
		}
		else
		{
			func_69(13);
		}
		if (iLocal_42 == 0)
		{
			func_91(45, 0);
		}
		else if (iLocal_42 == 1)
		{
			func_91(12, 0);
		}
		else if (iLocal_42 == 2)
		{
			func_91(34, 0);
		}
		if (iLocal_42 != 2)
		{
			Local_106 = { 0f, 0f, 0f };
		}
		iLocal_40 = 0;
		iLocal_41 = 0;
		MISC::CLEAR_BIT(&iLocal_105, 6);
		MISC::CLEAR_BIT(&iLocal_105, 7);
		MISC::CLEAR_BIT(&iLocal_105, 0);
		MISC::CLEAR_BIT(&iLocal_105, 1);
		MISC::CLEAR_BIT(&iLocal_105, 8);
		MISC::CLEAR_BIT(&iLocal_105, 12);
		MISC::CLEAR_BIT(&iLocal_105, 2);
		MISC::CLEAR_BIT(&iLocal_105, 14);
		if (iLocal_37 == 4)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1267))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1267);
			}
			func_108(0);
		}
		func_78(0, 0);
	}
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	MISC::SET_BIT(&(uLocal_101[func_5(iParam0)]), iVar0);
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_112293.f_32747[iParam0], iParam1);
}

int func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_76066.f_139[iParam0];
}

int func_75()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

bool func_76(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_77(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_78(int iParam0, bool bParam1)
{
	Global_112293.f_10047.f_128 = iParam0;
	iLocal_37 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_79();
}

int func_79()
{
	if (func_80(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_80(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77496, 0);
}

void func_81(char* sParam0, int iParam1)
{
	STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, true);
	if (MISC::IS_BIT_SET(iParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, true);
	}
	if (MISC::IS_BIT_SET(iParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, true);
	}
	if (MISC::IS_BIT_SET(iParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, true);
	}
}

int func_82()
{
	func_83();
	switch (Global_112293.f_2361.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_83()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_71(Global_112293.f_2361.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_70(PLAYER::PLAYER_PED_ID());
			if (func_55(iVar0) && (!func_84(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_55(Global_112293.f_2361.f_539.f_4321))
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

bool func_84(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_85(int iParam0)
{
	if (func_86(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_112293.f_8611[iParam0] = 1;
	Global_112293.f_8611.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_88(bool bParam0)
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_89())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_89()
{
	func_83();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_90(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_91(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_112293.f_9083.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_112293.f_9083.f_99.f_58[iParam0] = iParam1;
}

void func_92()
{
	Global_112293.f_10014.f_21++;
	if (iLocal_42 == 0)
	{
		STATS::STAT_SET_INT(joaat("fl_co_fb4p3"), Global_112293.f_10014.f_21, true);
		if (func_101())
		{
			if (func_241(74) || (func_241(75) && func_100()))
			{
				func_91(46, 1);
			}
		}
	}
	func_93();
	MISC::SET_BIT(&iLocal_105, 10);
}

void func_93()
{
	if (iLocal_42 == 0)
	{
		func_94(23, 0, 0);
	}
	else if (iLocal_42 == 1)
	{
	}
	else if (iLocal_42 == 2)
	{
	}
}

void func_94(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_98((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_112293.f_10192[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112293.f_10192[iParam0 /*12*/].f_6 == 11 || Global_112293.f_10192[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112293.f_10192[iParam0 /*12*/].f_5 = 1;
		Global_112293.f_10192[iParam0 /*12*/].f_10 = iParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_95();
	}
}

void func_95()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112029 = 0;
	Global_112030 = 0;
	Global_112031 = 0;
	Global_112032 = 0;
	Global_112033 = 0;
	Global_112034 = 0;
	Global_112035 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112293.f_10192.f_3853;
	Global_112293.f_10192.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112293.f_10192[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112293.f_10192[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112029++;
					fVar1 = (fVar1 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112030++;
					fVar2 = (fVar2 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112031++;
					fVar3 = (fVar3 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112032++;
					fVar4 = (fVar4 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112033++;
					fVar5 = (fVar5 + (Global_112293.f_10192[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112034++;
					fVar6 = (fVar6 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112035++;
					fVar7 = (fVar7 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112012 > 0)
	{
		if (Global_112029 == Global_112012)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112013 > 0)
	{
		if (Global_112030 == Global_112013)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112014 > 0)
	{
		if (Global_112031 == Global_112014)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112015 > 0)
	{
		if (Global_112032 == Global_112015)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112016 > 0)
	{
		if (((Global_112033 == Global_112016 || (Global_112016 * 10 / Global_112033) < 41) || Global_112033 > Global_112019) || Global_112033 == Global_112019)
		{
			if (!MISC::IS_BIT_SET(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_112016, 0);
					MISC::SET_BIT(&(Global_112293.f_10192.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112017 > 0)
	{
		if (Global_112034 == Global_112017)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112018 > 0)
	{
		if (Global_112035 == Global_112018)
		{
			fVar7 = 5f;
		}
	}
	Global_112293.f_10192.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112033 > Global_112019 || Global_112033 == Global_112019)
	{
		iVar9 = Global_112019;
	}
	else
	{
		iVar9 = Global_112033;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_112029, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_112012, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_112030, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_112013, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_112031, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_112014, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_112032, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_112015, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_112019, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_112035 + Global_112034), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_112018 + Global_112017), true);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_112293.f_10192.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_112036, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_112037, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_112038, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112293.f_10192.f_3853))
	{
		func_97(13, SYSTEM::FLOOR(Global_112293.f_10192.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_77248)
		{
			if (func_96() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_79();
				}
			}
		}
	}
}

int func_96()
{
	return Global_31345;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

bool func_98(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_99();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar25, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar26, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

int func_99()
{
	return Global_1312763;
}

int func_100()
{
	if ((func_241(41) && func_241(3)) && func_241(21))
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (iLocal_42 == 0)
	{
		return func_106();
	}
	else if (iLocal_42 == 1)
	{
		return func_105();
	}
	else if (iLocal_42 == 2)
	{
		return func_102();
	}
	return 0;
}

int func_102()
{
	if ((func_241(79) && func_241(83)) && func_103(func_104()))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

int func_104()
{
	if (iLocal_42 == 0)
	{
		return 45;
	}
	else if (iLocal_42 == 1)
	{
		return 12;
	}
	else if (iLocal_42 == 2)
	{
		return 34;
	}
	return -1;
}

int func_105()
{
	if (func_241(68))
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	if (func_107(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_241(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_103(func_104()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_108(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

void func_109()
{
	struct<6> Var0;
	
	if (iLocal_40 != 0)
	{
		Var0 = { func_128() };
		switch (iLocal_40)
		{
			case 1:
				if (iLocal_42 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
						{
							func_127("LOCAUD", Local_44.f_7);
							func_126(1);
							iLocal_40 = 2;
						}
						else if (MISC::IS_BIT_SET(iLocal_105, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
						{
							func_127("LOCAUD", Local_44.f_7);
							func_126(1);
							iLocal_40 = 2;
						}
					}
				}
				else
				{
					iLocal_40 = 0;
				}
				if (func_125())
				{
					iLocal_40 = 3;
				}
				break;
			
			case 2:
				if (func_125())
				{
					iLocal_40 = 3;
				}
				if (!MISC::IS_BIT_SET(iLocal_105, 10))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
					{
						func_118(Var0);
					}
				}
				else
				{
					iLocal_40 = 3;
				}
				break;
			
			case 3:
				if (!func_117())
				{
					iLocal_40 = 4;
				}
				break;
			
			case 4:
				if (!func_15(0))
				{
					if (iLocal_42 == 1)
					{
						func_114(Local_44.f_8);
					}
					iLocal_40 = 5;
				}
				break;
			
			case 5:
				if (func_89() == 0)
				{
					if (iLocal_42 == 0)
					{
						if (func_101())
						{
							if ((func_241(74) || func_241(75)) && func_100())
							{
								func_110(1);
								iLocal_40 = 0;
							}
							else
							{
								func_110(0);
								iLocal_40 = 0;
							}
						}
						else
						{
							iLocal_40 = 0;
						}
					}
					else
					{
						iLocal_40 = 0;
					}
				}
				else
				{
					if (iLocal_42 == 0)
					{
						if (func_101())
						{
							if (!func_241(3))
							{
								func_87(50, 0);
							}
						}
					}
					iLocal_40 = 0;
				}
				break;
			}
	}
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		func_111(1527885205, 0, func_89(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_241(3))
	{
		func_111(-224691627, 0, func_89(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_111(-224691627, 0, func_89(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_80(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_112293.f_7686.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_112293.f_7686.f_911 == Var0)
		{
			Global_112293.f_7686.f_911 = -1;
		}
		Var0.f_3 = func_113(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_112293.f_7686[Global_112293.f_7686.f_136 /*15*/] = { Var0 };
		Global_112293.f_7686.f_136++;
		func_112(iParam2);
		return 1;
	}
	return 0;
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_55(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_7686[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_112293.f_7686[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_112293.f_7686[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_112293.f_7686.f_764)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_7686.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_112293.f_7686.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_112293.f_7686.f_919[iParam0] = iVar1;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_114(int iParam0)
{
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		func_116(iParam0, 0, 0);
		func_116(iParam0, 1, 0);
		func_116(iParam0, 2, 0);
		func_115(iParam0, 0, 0);
		func_115(iParam0, 1, 0);
		func_115(iParam0, 2, 0);
	}
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_117()
{
	if (Global_21125 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_118(struct<6> Param0)
{
	if (iLocal_42 == 0)
	{
		func_123(Param0);
	}
	else if (iLocal_42 == 1)
	{
		func_119(Param0);
	}
}

void func_119(struct<6> Param0)
{
	if (func_101())
	{
		func_120(Param0, 1);
	}
	else
	{
		func_120(Param0, 0);
	}
}

void func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, Local_44.f_7))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
			{
				if (iLocal_42 == 0)
				{
					Var0 = { func_122(bParam6) };
					func_91(46, 1);
					func_127(sLocal_1272, &Var0);
					func_126(1);
				}
				else if (iLocal_42 == 1)
				{
					Var0 = { func_121(bParam6) };
					func_127(sLocal_1272, &Var0);
					func_126(1);
				}
				iLocal_40 = 3;
			}
		}
	}
}

struct<4> func_121(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_89())
		{
			case 1:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_89())
		{
			case 1:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_122(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_89())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_89())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

void func_123(struct<6> Param0)
{
	if (func_101())
	{
		if (func_124())
		{
			if (func_89() != 0)
			{
				func_120(Param0, 1);
			}
			else
			{
				iLocal_40 = 3;
			}
		}
		else if (func_89() != 0)
		{
			func_120(Param0, 0);
		}
		else
		{
			iLocal_40 = 3;
		}
	}
	else
	{
		iLocal_40 = 3;
	}
}

int func_124()
{
	if (iLocal_42 == 0)
	{
		if ((func_241(74) || func_241(74)) && func_100())
		{
			return 1;
		}
	}
	else if (iLocal_42 == 1)
	{
		if (func_241(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_125()
{
	if (Global_21174 == 1 || Global_22141 == 1)
	{
		return 1;
	}
	return 0;
}

void func_126(bool bParam0)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_127(char* sParam0, char* sParam1)
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_21182 = 1;
		StringCopy(&Global_21189, sParam0, 24);
		StringCopy(&Global_21183, sParam1, 24);
	}
}

struct<6> func_128()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		return Global_20744;
	}
	return Var0;
}

void func_129()
{
	func_130();
}

void func_130()
{
	func_134();
	func_131();
}

void func_131()
{
	if (func_133() == 85)
	{
		if (func_132() && !func_73(25, 0))
		{
			if (Local_114.f_66 != 0)
			{
				func_56(25, &Local_114, Local_110, fLocal_113, 145);
			}
		}
	}
}

int func_132()
{
	if (Global_99370 == 10 || Global_99370 == 9)
	{
		return 1;
	}
	return 0;
}

int func_133()
{
	return Global_77510;
}

void func_134()
{
	if (!func_77(Local_110, 0f, 0f, 0f, 0) && func_133() != func_135())
	{
		if (func_76(PLAYER::PLAYER_PED_ID(), Local_110, 60f))
		{
			if (func_85(func_74(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_74(25), true), Local_110) >= 100f)
				{
					func_68(0);
				}
			}
			else if (!func_73(25, 0))
			{
				func_68(1);
			}
		}
	}
}

int func_135()
{
	if (iLocal_42 == 0)
	{
		return 38;
	}
	else if (iLocal_42 == 1)
	{
		return 69;
	}
	else if (iLocal_42 == 2)
	{
		return 85;
	}
	return -1;
}

void func_136()
{
	func_17();
	func_109();
}

void func_137()
{
	func_151();
	func_147();
	func_144();
	func_109();
	if (func_76(PLAYER::PLAYER_PED_ID(), Local_106, 150f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -176.9431f, -651.257f, 31.2136f, -150.9563f, -579.7476f, 35.4245f, 50f, false, true, 0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_106, 6f, false, true, false, false, false, false);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, false, true);
	}
	if (!MISC::IS_BIT_SET(iLocal_105, 18))
	{
		if (!func_15(0) && !func_117())
		{
			func_143(sLocal_53[4], 7500, 0);
			MISC::SET_BIT(&iLocal_105, 18);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_105, 0))
	{
		if (MISC::IS_BIT_SET(iLocal_105, 1))
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
			func_142(&iLocal_1438);
			if (!iLocal_1440)
			{
				iLocal_1440 = 1;
				if (!func_141("PRC_GETOUT", 0, 0))
				{
					func_143("PRC_GETOUT", 7500, 0);
				}
			}
			if (func_85(iLocal_109))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_109, false))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_109))
					{
						func_139();
						func_138(&uLocal_1439);
						func_91(35, 0);
						if (func_141("PRC_GETOUT", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, true, true);
						func_78(4, 0);
					}
				}
			}
		}
		else
		{
			if (func_141("PRC_GETOUT", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_1440 = 0;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_105, 18);
		func_138(&uLocal_1439);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, true, true);
		func_78(0, 1);
	}
}

void func_138(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41971)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41970 = 0;
	Global_41972 = 0;
	Global_42009 = 15;
	Global_62095 = 0;
	Global_62096 = 0;
}

void func_139()
{
	if (!MISC::IS_BIT_SET(iLocal_105, 6))
	{
		if (func_85(iLocal_109))
		{
			Local_110 = { ENTITY::GET_ENTITY_COORDS(iLocal_109, true) };
			fLocal_113 = ENTITY::GET_ENTITY_HEADING(iLocal_109);
			MISC::SET_BIT(&iLocal_105, 6);
			MISC::SET_BIT(&iLocal_105, 2);
			func_62(iLocal_109, &Local_114);
			func_21(iLocal_109, Local_110, fLocal_113, 25, 1);
			MISC::SET_BIT(&iLocal_105, 14);
			func_140(iLocal_109);
		}
	}
}

int func_140(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
	{
		if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true))
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

bool func_141(char* sParam0, int iParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_142(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_143(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_144()
{
	switch (iLocal_38)
	{
		case 0:
			if (((!HUD::DOES_BLIP_EXIST(iLocal_1438) && MISC::IS_BIT_SET(iLocal_105, 0)) && !MISC::IS_BIT_SET(iLocal_105, 1)) && MISC::IS_BIT_SET(iLocal_105, 18))
			{
				iLocal_1438 = func_145(Local_106, 1);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
			}
			break;
		
		case 1:
			func_142(&iLocal_1438);
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
			break;
		
		case 2:
			break;
	}
}

int func_145(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_146(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147()
{
	if (func_103(35))
	{
		if (iLocal_38 == 0)
		{
			if (!MISC::IS_BIT_SET(iLocal_105, 1))
			{
				if (func_85(iLocal_109))
				{
					ENTITY::IS_ENTITY_AT_COORD(iLocal_109, Local_106, 4f, 4f, 2f, true, true, 0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_109, -168.8162f, -619.9002f, 31.42446f, -162.6423f, -622.0781f, 33.42446f, 4.14f, false, true, 0))
					{
						func_150(24, 46);
						if (func_149(iLocal_109))
						{
							if (func_148(1077936128, 1))
							{
								MISC::SET_BIT(&iLocal_105, 1);
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_105, 0))
			{
				if (!func_76(iLocal_109, Local_106, 10f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_109))
				{
					MISC::CLEAR_BIT(&iLocal_105, 1);
				}
			}
		}
	}
}

int func_148(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, false);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0)
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		func_69(39);
		return 0;
	}
	if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, -1, false, false) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, false))
	{
		func_69(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		func_69(36);
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (Var0.x >= 10f || Var0.x <= -10f)
	{
		func_69(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_69(43);
		return 0;
	}
	return 1;
}

void func_150(int iParam0, int iParam1)
{
	func_4(iParam0);
	if (func_2(func_3(iParam0)))
	{
		HUD::CLEAR_HELP(true);
		MISC::SET_BIT(&iLocal_105, 15);
	}
	if (iParam1 != 46)
	{
		func_4(iParam1);
		if (func_2(func_3(iParam1)))
		{
			HUD::CLEAR_HELP(true);
			MISC::SET_BIT(&iLocal_105, 15);
		}
	}
}

void func_151()
{
	int iVar0;
	int iVar1;
	
	if ((Global_42009 == 15 && !func_169()) || func_103(35))
	{
		if (iLocal_38 == 0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!MISC::IS_BIT_SET(iLocal_105, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!MISC::IS_BIT_SET(iLocal_105, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_85(iVar0))
							{
								if (!func_168(iVar0))
								{
									if (func_161(iVar0) && !func_160())
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
										{
											if (!MISC::IS_BIT_SET(iLocal_105, 19))
											{
												func_69(9);
												MISC::SET_BIT(&iLocal_105, 19);
											}
											else if (func_70(PLAYER::PLAYER_PED_ID()) == 0)
											{
												func_69(17);
											}
											else
											{
												func_69(18);
											}
											iLocal_109 = iVar0;
											if (DECORATOR::DECOR_SET_BOOL(iLocal_109, "GetawayVehicleValid", true))
											{
											}
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_109, true, true);
											MISC::SET_BIT(&iLocal_105, 0);
											MISC::SET_BIT(&iLocal_105, 8);
											MISC::SET_BIT(&iLocal_105, 7);
											return;
										}
										else
										{
											func_20(&iLocal_109);
											MISC::CLEAR_BIT(&iLocal_105, 7);
											MISC::CLEAR_BIT(&iLocal_105, 0);
											return;
										}
									}
									if (DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", false))
									{
									}
									MISC::SET_BIT(&iLocal_105, 7);
								}
								else if (func_159(iVar0))
								{
									iLocal_109 = iVar0;
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_109, true, true);
									MISC::SET_BIT(&iLocal_105, 0);
									MISC::SET_BIT(&iLocal_105, 8);
									MISC::SET_BIT(&iLocal_105, 7);
									return;
								}
							}
							else
							{
								func_20(&iLocal_109);
								MISC::SET_BIT(&iLocal_105, 7);
								MISC::CLEAR_BIT(&iLocal_105, 0);
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_105, 0))
						{
							if (!func_85(iLocal_109))
							{
								func_20(&iLocal_109);
								MISC::SET_BIT(&iLocal_105, 0);
								MISC::SET_BIT(&iLocal_105, 8);
								MISC::SET_BIT(&iLocal_105, 7);
							}
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_105, 8))
					{
						iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_85(iVar1))
						{
							if (func_19(PLAYER::PLAYER_PED_ID(), iVar1, 10f, 1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched"))
							{
								iLocal_109 = iVar1;
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_109, true, true);
								MISC::SET_BIT(&iLocal_105, 0);
								MISC::SET_BIT(&iLocal_105, 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&iLocal_105, 7);
					}
				}
				else if (func_85(iLocal_109))
				{
					if (!func_19(PLAYER::PLAYER_PED_ID(), iLocal_109, 80f, 1))
					{
						func_69(5);
						MISC::SET_BIT(&iLocal_105, 8);
						func_20(&iLocal_109);
						MISC::CLEAR_BIT(&iLocal_105, 0);
						MISC::CLEAR_BIT(&iLocal_105, 7);
						func_249();
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_109)
						{
							func_20(&iLocal_109);
							func_150(17, 46);
							func_150(18, 46);
							func_150(14, 46);
							func_158();
							if (func_13())
							{
								func_153(0);
							}
							func_249();
						}
					}
					else if (!func_152(iLocal_109))
					{
						if (DECORATOR::DECOR_SET_BOOL(iLocal_109, "GetawayVehicleValid", false))
						{
						}
						func_150(17, 46);
						func_150(18, 46);
						func_20(&iLocal_109);
						func_249();
						func_158();
					}
				}
				else
				{
					func_20(&iLocal_109);
					func_158();
					func_249();
				}
			}
		}
	}
}

int func_152(int iParam0)
{
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f)
	{
		func_69(6);
		return 0;
	}
	return 1;
}

void func_153(int iParam0)
{
	if (func_157())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_156())
		{
			func_155(1, 1);
		}
		else
		{
			func_155(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7669, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7668, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7668, 30);
	}
	if (!func_154())
	{
		Global_19798.f_1 = 3;
	}
}

int func_154()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_155(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19735);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19726);
		}
	}
}

bool func_156()
{
	return MISC::IS_BIT_SET(Global_1695733, 5);
}

bool func_157()
{
	return MISC::IS_BIT_SET(Global_1695733, 19);
}

void func_158()
{
	MISC::CLEAR_BIT(&iLocal_105, 0);
	MISC::CLEAR_BIT(&iLocal_105, 8);
	MISC::CLEAR_BIT(&iLocal_105, 7);
}

int func_159(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		if (DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_160()
{
	if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
	{
		if ((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, false) == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if ((func_167() && func_163(iParam0)) && func_162(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_69(15);
	return 0;
}

int func_163(int iParam0)
{
	if ((func_165(iParam0) && !func_164(iParam0)) && func_152(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (iVar0 == 0)
	{
		func_69(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_69(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_69(27);
		return 1;
	}
	if (func_36(iParam0))
	{
		func_69(14);
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_166(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_69(14);
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_192[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_241(33))
			{
				MISC::SET_BIT(&iLocal_105, 3);
			}
			else if (iVar0 == 1 && !func_241(34))
			{
				MISC::SET_BIT(&iLocal_105, 3);
			}
			else
			{
				MISC::CLEAR_BIT(&iLocal_105, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167()
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		func_69(14);
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_169()
{
	if (Global_96292 != -1)
	{
		return MISC::IS_BIT_SET(Global_90158[Global_96292 /*34*/].f_15, 13);
	}
	return 0;
}

void func_170()
{
	int iVar0;
	
	func_151();
	func_109();
	func_208();
	if (func_206())
	{
		if (func_200(&uLocal_1439) && func_171(&iVar0))
		{
			func_250(0);
			if (iVar0 == 1)
			{
				func_78(iVar0, 0);
			}
			else
			{
				func_78(iVar0, 1);
			}
		}
	}
}

int func_171(var uParam0)
{
	char* sVar0;
	
	if (MISC::IS_BIT_SET(iLocal_105, 0))
	{
		func_189();
		if (func_172())
		{
			sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (iLocal_42 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_172()
{
	if (func_174(&uLocal_1273, Local_44.f_8, sLocal_1272, Local_44.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_40 = 1;
		func_173(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		return 1;
	}
	return 0;
}

void func_173(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(Global_31724[iParam0 /*23*/].f_19))
	{
		HUD::SET_BLIP_COORDS(Global_31724[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_31724[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_174(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_188(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	if (iParam5 == 1)
	{
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
	}
	Global_2621441 = 0;
	return func_175(sParam3, iParam4, bParam8);
}

int func_175(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_187();
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
		if (func_186(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_185();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			MISC::CLEAR_BIT(&Global_7668, 20);
			MISC::CLEAR_BIT(&Global_7669, 17);
			MISC::CLEAR_BIT(&Global_7670, 0);
			if (bParam2)
			{
				func_184();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_183())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
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
			if (func_154())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
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
				if (MISC::IS_BIT_SET(Global_7668, 9))
				{
					return 0;
				}
			}
			func_182();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_181();
		func_176();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_187();
	}
	return 0;
}

void func_176()
{
	if (!func_177())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_177()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_180())
	{
		return 0;
	}
	if (func_178(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_178(int iParam0)
{
	return func_179(iParam0, 20);
}

bool func_179(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_180()
{
	return -1;
}

void func_181()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21125 = 1;
}

void func_182()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	MISC::CLEAR_BIT(&Global_7669, 16);
}

int func_183()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
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
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
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

void func_184()
{
	if (func_84(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[2 /*29*/])
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
		Global_19798 = func_89();
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

void func_185()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_186(int iParam0, int iParam1)
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
	return MISC::IS_BIT_SET(Global_1379108.f_1048, iParam0);
}

void func_187()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22136 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21125 = 6;
		return;
	}
}

void func_188(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = uParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

void func_189()
{
	int iVar0;
	
	iVar0 = func_89();
	func_190(iVar0, func_199(iVar0));
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			Local_44 = 0;
			Local_44.f_1 = "MICHAEL";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 1;
				Local_44.f_3 = "FRANKLIN";
				Local_44.f_8 = 5;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 6;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_FRESP";
			func_197(iParam0);
			break;
		
		case 1:
			Local_44 = 1;
			Local_44.f_1 = "FRANKLIN";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 9;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_197(iParam0);
			break;
		
		case 2:
			Local_44 = 2;
			Local_44.f_1 = "TREVOR";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 8;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_197(iParam0);
			break;
	}
	if (iLocal_42 == 1)
	{
		if (iParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		func_192(Local_44.f_8, iVar0, 0);
	}
	func_191(&uLocal_1273, Local_44, PLAYER::PLAYER_PED_ID(), Local_44.f_1, 0, 1);
	func_191(&uLocal_1273, Local_44.f_2, 0, Local_44.f_3, 0, 1);
	Local_44.f_4 = uParam1;
}

void func_191(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8354 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		func_184();
		if (iParam1 == 4)
		{
			func_116(iParam0, 0, 1);
			func_116(iParam0, 1, 1);
			func_116(iParam0, 2, 1);
			func_115(iParam0, 0, 1);
			func_115(iParam0, 1, 1);
			func_115(iParam0, 2, 1);
		}
		else
		{
			if (func_196(iParam0, iParam1) == 1 && func_195(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_116(iParam0, iVar0, 1);
			func_115(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2544210.f_6705)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77248)
			{
				if (iParam1 != 4)
				{
					if (Global_19798 != iParam1)
					{
						Global_8327[iParam1 /*4*/] = { func_194(iParam0) };
						Global_8344[iParam1] = 1;
						Global_8349[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19798)
					{
					}
					else
					{
						Global_8278[1 /*6*/] = { func_194(iParam0) };
						Global_8278[1 /*6*/].f_5 = iParam1;
						func_193();
					}
				}
				else
				{
					Global_8278[1 /*6*/] = { func_194(iParam0) };
					Global_8278[1 /*6*/].f_5 = iParam1;
					func_193();
				}
			}
			else
			{
				Global_8278[1 /*6*/] = { func_194(iParam0) };
				Global_8278[1 /*6*/].f_5 = iParam1;
				func_193();
			}
		}
	}
}

void func_193()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1878[Global_8354 /*29*/].f_7)), 64);
	if (Global_8373 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8278[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8278[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7668, 0);
}

struct<4> func_194(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_195(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

int func_196(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

void func_197(int iParam0)
{
	Local_44.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	func_198(iParam0);
}

void func_198(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_44.f_6))
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SanAnd"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F78";
			}
			else
			{
				Local_44.f_7 = "LOC_T78";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Alamo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F1";
			}
			else
			{
				Local_44.f_7 = "LOC_T1";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Alta"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F2";
			}
			else
			{
				Local_44.f_7 = "LOC_T2";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Airp"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F49";
			}
			else
			{
				Local_44.f_7 = "LOC_T49";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ArmyB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F29";
			}
			else
			{
				Local_44.f_7 = "LOC_T29";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BhamCa"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F3";
			}
			else
			{
				Local_44.f_7 = "LOC_T3";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Banning"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F4";
			}
			else
			{
				Local_44.f_7 = "LOC_T4";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Baytre"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F5";
			}
			else
			{
				Local_44.f_7 = "LOC_T5";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Beach"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F94";
			}
			else
			{
				Local_44.f_7 = "LOC_T94";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BradT"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F8";
			}
			else
			{
				Local_44.f_7 = "LOC_T8";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "BradP"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F7";
			}
			else
			{
				Local_44.f_7 = "LOC_T7";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Burton"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F9";
			}
			else
			{
				Local_44.f_7 = "LOC_T9";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CANNY"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F71";
			}
			else
			{
				Local_44.f_7 = "LOC_T71";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CCreak"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F11";
			}
			else
			{
				Local_44.f_7 = "LOC_T11";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CalafB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F10";
			}
			else
			{
				Local_44.f_7 = "LOC_T10";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ChamH"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F12";
			}
			else
			{
				Local_44.f_7 = "LOC_T12";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CHU"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F14";
			}
			else
			{
				Local_44.f_7 = "LOC_T14";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CHIL"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F97";
			}
			else
			{
				Local_44.f_7 = "LOC_T97";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "COSI"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F15";
			}
			else
			{
				Local_44.f_7 = "LOC_T15";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "CMSW"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F13";
			}
			else
			{
				Local_44.f_7 = "LOC_T13";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Cypre"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F16";
			}
			else
			{
				Local_44.f_7 = "LOC_T16";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Davis"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F17";
			}
			else
			{
				Local_44.f_7 = "LOC_T17";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Desrt"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F33";
			}
			else
			{
				Local_44.f_7 = "LOC_T33";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelBe"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F20";
			}
			else
			{
				Local_44.f_7 = "LOC_T20";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelPe"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F19";
			}
			else
			{
				Local_44.f_7 = "LOC_T19";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DelSol"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Downt"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F21";
			}
			else
			{
				Local_44.f_7 = "LOC_T21";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "DTVine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F22";
			}
			else
			{
				Local_44.f_7 = "LOC_T22";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Eclips"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F25";
			}
			else
			{
				Local_44.f_7 = "LOC_T25";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ELSant"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F23";
			}
			else
			{
				Local_44.f_7 = "LOC_T23";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "EBuro"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F26";
			}
			else
			{
				Local_44.f_7 = "LOC_T26";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ELGorl"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F27";
			}
			else
			{
				Local_44.f_7 = "LOC_T27";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Elysian"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F28";
			}
			else
			{
				Local_44.f_7 = "LOC_T28";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Galli"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F32";
			}
			else
			{
				Local_44.f_7 = "LOC_T32";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Galfish"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F30";
			}
			else
			{
				Local_44.f_7 = "LOC_T30";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Greatc"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F35";
			}
			else
			{
				Local_44.f_7 = "LOC_T35";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Golf"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F36";
			}
			else
			{
				Local_44.f_7 = "LOC_T36";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "GrapeS"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F34";
			}
			else
			{
				Local_44.f_7 = "LOC_T34";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Hawick"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F38";
			}
			else
			{
				Local_44.f_7 = "LOC_T38";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Harmo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F37";
			}
			else
			{
				Local_44.f_7 = "LOC_T37";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Heart"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F39";
			}
			else
			{
				Local_44.f_7 = "LOC_T39";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "HumLab"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F40";
			}
			else
			{
				Local_44.f_7 = "LOC_T40";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "HORS"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F98";
			}
			else
			{
				Local_44.f_7 = "LOC_T98";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Koreat"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F47";
			}
			else
			{
				Local_44.f_7 = "LOC_T47";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Jail"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F6";
			}
			else
			{
				Local_44.f_7 = "LOC_T6";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LAct"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F46";
			}
			else
			{
				Local_44.f_7 = "LOC_T46";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LDam"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F45";
			}
			else
			{
				Local_44.f_7 = "LOC_T45";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Lago"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F44";
			}
			else
			{
				Local_44.f_7 = "LOC_T44";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LegSqu"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosSF"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F48";
			}
			else
			{
				Local_44.f_7 = "LOC_T48";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LMesa"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F41";
			}
			else
			{
				Local_44.f_7 = "LOC_T41";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPuer"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPFy"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F43";
			}
			else
			{
				Local_44.f_7 = "LOC_T43";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "LOSTMC"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Mirr"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F51";
			}
			else
			{
				Local_44.f_7 = "LOC_T51";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Morn"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F53";
			}
			else
			{
				Local_44.f_7 = "LOC_T53";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Murri"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F57";
			}
			else
			{
				Local_44.f_7 = "LOC_T57";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTChil"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F54";
			}
			else
			{
				Local_44.f_7 = "LOC_T54";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTJose"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F56";
			}
			else
			{
				Local_44.f_7 = "LOC_T56";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "MTGordo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F55";
			}
			else
			{
				Local_44.f_7 = "LOC_T55";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Movie"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F73";
			}
			else
			{
				Local_44.f_7 = "LOC_T73";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "NCHU"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F58";
			}
			else
			{
				Local_44.f_7 = "LOC_T58";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Noose"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Oceana"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F61";
			}
			else
			{
				Local_44.f_7 = "LOC_T61";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Observ"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F31";
			}
			else
			{
				Local_44.f_7 = "LOC_T31";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Palmpow"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F65";
			}
			else
			{
				Local_44.f_7 = "LOC_T65";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PBOX"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F67";
			}
			else
			{
				Local_44.f_7 = "LOC_T67";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PBluff"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F60";
			}
			else
			{
				Local_44.f_7 = "LOC_T60";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Paleto"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F62";
			}
			else
			{
				Local_44.f_7 = "LOC_T62";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalCov"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F63";
			}
			else
			{
				Local_44.f_7 = "LOC_T63";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalFor"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F64";
			}
			else
			{
				Local_44.f_7 = "LOC_T64";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "PalHigh"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F66";
			}
			else
			{
				Local_44.f_7 = "LOC_T66";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ProcoB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F69";
			}
			else
			{
				Local_44.f_7 = "LOC_T69";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Prol"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F59";
			}
			else
			{
				Local_44.f_7 = "LOC_T59";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "RTRAK"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F72";
			}
			else
			{
				Local_44.f_7 = "LOC_T72";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Rancho"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F70";
			}
			else
			{
				Local_44.f_7 = "LOC_T70";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "RGLEN"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F75";
			}
			else
			{
				Local_44.f_7 = "LOC_T75";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Richm"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F74";
			}
			else
			{
				Local_44.f_7 = "LOC_T74";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Rockf"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F76";
			}
			else
			{
				Local_44.f_7 = "LOC_T76";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SANDY"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F80";
			}
			else
			{
				Local_44.f_7 = "LOC_T80";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaH"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F88";
			}
			else
			{
				Local_44.f_7 = "LOC_T88";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaV"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F89";
			}
			else
			{
				Local_44.f_7 = "LOC_T89";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "East_V"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F24";
			}
			else
			{
				Local_44.f_7 = "LOC_T24";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Zenora"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F81";
			}
			else
			{
				Local_44.f_7 = "LOC_T81";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Slab"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F82";
			}
			else
			{
				Local_44.f_7 = "LOC_T82";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SKID"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F52";
			}
			else
			{
				Local_44.f_7 = "LOC_T52";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SLSant"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F83";
			}
			else
			{
				Local_44.f_7 = "LOC_T83";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Stad"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F50";
			}
			else
			{
				Local_44.f_7 = "LOC_T50";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Tatamo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Termina"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F86";
			}
			else
			{
				Local_44.f_7 = "LOC_T86";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "TEXTI"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F87";
			}
			else
			{
				Local_44.f_7 = "LOC_T87";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WVine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F100";
			}
			else
			{
				Local_44.f_7 = "LOC_T100";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "UtopiaG"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F90";
			}
			else
			{
				Local_44.f_7 = "LOC_T90";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Vesp"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F93";
			}
			else
			{
				Local_44.f_7 = "LOC_T93";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "VCana"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F95";
			}
			else
			{
				Local_44.f_7 = "LOC_T95";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Vine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F96";
			}
			else
			{
				Local_44.f_7 = "LOC_T96";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WMirror"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F99";
			}
			else
			{
				Local_44.f_7 = "LOC_T99";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "WindF"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F77";
			}
			else
			{
				Local_44.f_7 = "LOC_T77";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "Zancudo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F101";
			}
			else
			{
				Local_44.f_7 = "LOC_T101";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "SanChia"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F79";
			}
			else
			{
				Local_44.f_7 = "LOC_T79";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "STRAW"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F84";
			}
			else
			{
				Local_44.f_7 = "LOC_T84";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F18";
			}
			else
			{
				Local_44.f_7 = "LOC_T18";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_44.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F68";
			}
			else
			{
				Local_44.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_44.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_44.f_7 = "LOC_M";
		}
		else
		{
			Local_44.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_44.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_44.f_7 = "LOC_F";
	}
	else
	{
		Local_44.f_7 = "LOC_T";
	}
}

char* func_199(int iParam0)
{
	char* sVar0;
	
	if (!MISC::IS_BIT_SET(iLocal_105, 10))
	{
		if (iLocal_42 == 0)
		{
			sLocal_1272 = "FBIPRAU";
		}
		else if (iLocal_42 == 1)
		{
			sLocal_1272 = "AHFAUD";
		}
		else if (iLocal_42 == 2)
		{
			sLocal_1272 = "FHFAUD";
		}
		if (iLocal_42 == 0)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_42 == 1)
		{
			if (iParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_42 == 2)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_1272 = "FHFAUD";
		if (iParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (iParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_200(var uParam0)
{
	switch (func_201(uParam0, 1, 5, 0, 0))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			func_91(35, 0);
			func_153(0);
			return 0;
			break;
		
		case 2:
			func_91(35, 1);
			return 0;
			break;
	}
	return 0;
}

int func_201(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_205(0))
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22531.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_42009 = iParam2;
		Global_41971 = *uParam0;
		Global_41972 = iParam4;
		Global_41970 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41970 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41970)
			{
				if (Global_41976[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41971 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_203(iParam2))
		{
			return 0;
		}
		if (Global_41970 == 8)
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		Global_41976[Global_41970 /*4*/] = Global_41973;
		Global_41976[Global_41970 /*4*/].f_1 = iParam1;
		Global_41976[Global_41970 /*4*/].f_2 = iParam2;
		Global_41976[Global_41970 /*4*/].f_3 = 0;
		Global_41970++;
		if (iParam4 != 0)
		{
			func_202(uParam0, iParam4);
		}
	}
	return 2;
}

void func_202(var uParam0, int iParam1)
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

bool func_203(int iParam0)
{
	return func_204(iParam0, Global_42009);
}

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_203(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_206()
{
	if (MISC::IS_BIT_SET(iLocal_105, 0))
	{
		if (func_85(iLocal_109))
		{
			if (func_207(12))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (Global_22240 == 0)
	{
		return 0;
	}
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (Global_19798.f_1 == 10)
		{
			if (Global_6983 == iParam0)
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
	return 0;
}

void func_208()
{
	if (MISC::IS_BIT_SET(iLocal_105, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_105, 11))
		{
			func_250(1);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_105, 11))
	{
		func_250(0);
	}
}

void func_209()
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_42009 == 15 && iLocal_37 != 3) && MISC::IS_BIT_SET(iLocal_105, 5)) && !func_169()) && Global_77245 == -1) && !func_219()) && !func_84(9)) || func_103(35))
	{
		func_218();
		func_217();
		switch (iLocal_39)
		{
			case 0:
				if (MISC::IS_BIT_SET(iLocal_105, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_216(uLocal_101[0], &iVar0);
						}
					}
					MISC::CLEAR_BIT(&iLocal_105, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_216(uLocal_101[1], &iVar0);
						}
					}
					MISC::SET_BIT(&iLocal_105, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_211(iLocal_100, 1);
				break;
		}
	}
	else if (((((((Global_42009 != 15 || Global_42009 != 0) || Global_42009 != 2) || Global_42009 != 4) || Global_42009 != 17) || func_169()) || Global_77245 == -1) || Global_111348)
	{
		iVar1 = 0;
		if (func_210())
		{
			iVar1 = 1;
		}
		else if (Global_111348)
		{
			iVar1 = 2;
		}
		if (MISC::IS_BIT_SET(uLocal_101[func_5(iVar1)], iVar1))
		{
			func_211(iVar1, 0);
		}
	}
}

bool func_210()
{
	return SCRIPT::IS_THREAD_ACTIVE(Global_112293.f_18101.f_395);
}

void func_211(int iParam0, bool bParam1)
{
	switch (iLocal_39)
	{
		case 1:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_214(func_89())) && !func_213())
			{
				func_212(func_3(iParam0), 15000);
				iLocal_39 = 2;
			}
			break;
		
		case 2:
			if (func_2(func_3(iParam0)))
			{
				fLocal_104 = 0f;
				iLocal_39 = 3;
			}
			else
			{
				fLocal_104 = (fLocal_104 + MISC::GET_FRAME_TIME());
				if (fLocal_104 >= 20f)
				{
					iLocal_39 = 4;
				}
				else if (MISC::IS_BIT_SET(iLocal_105, 15))
				{
					func_4(iParam0);
					MISC::CLEAR_BIT(&iLocal_105, 15);
					iLocal_39 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(iParam0)))
			{
				if (fLocal_104 >= 7.5f || MISC::IS_BIT_SET(iLocal_105, 15))
				{
					func_4(iParam0);
					MISC::CLEAR_BIT(&iLocal_105, 15);
					iLocal_39 = 4;
				}
				else if (bParam1)
				{
					iLocal_39 = 0;
				}
				else
				{
					iLocal_39 = 1;
					fLocal_104 = 0f;
				}
			}
			else
			{
				fLocal_104 = (fLocal_104 + MISC::GET_FRAME_TIME());
			}
			break;
		
		case 4:
			fLocal_104 = 0f;
			iLocal_39 = 0;
			break;
	}
}

void func_212(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_213()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	
	if (func_55(iParam0))
	{
		if (func_215(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_112293.f_7686.f_136)
			{
				if (Global_112293.f_7686[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (!func_55(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_7686[iVar0 /*15*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_764)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_7686.f_651[iVar0 /*14*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_866)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_7686.f_765[iVar0 /*10*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_6(*iParam1);
	if (MISC::IS_BIT_SET(iParam0, iVar0))
	{
		if (!MISC::IS_BIT_SET(iLocal_105, 3))
		{
			iLocal_100 = *iParam1;
			iLocal_39 = 1;
			fLocal_104 = 0f;
			func_4(44);
			func_4(45);
			iLocal_1269 = MISC::GET_GAME_TIMER();
			*iParam1 = 46;
		}
		else if (14 == iVar0)
		{
			func_4(iVar0);
			*iParam1 = 46;
		}
		else
		{
			iLocal_100 = *iParam1;
			iLocal_39 = 1;
			fLocal_104 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_217()
{
	if (iLocal_37 == 0 || iLocal_37 == 1)
	{
		switch (iLocal_38)
		{
			case 0:
				if (func_141(func_3(3), 0, 0))
				{
					MISC::SET_BIT(&iLocal_105, 15);
					HUD::CLEAR_HELP(true);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_210()) && !Global_110933)
					{
						MISC::SET_BIT(&iLocal_105, 15);
						HUD::CLEAR_HELP(true);
					}
					iLocal_38 = 1;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(iLocal_105, 0))
				{
					if (iLocal_42 == 2)
					{
						if (iLocal_37 == 1)
						{
							if (func_85(iLocal_109))
							{
								func_69(3);
								func_1(3, 1);
							}
						}
						iLocal_38 = 2;
					}
					else
					{
						if (func_85(iLocal_109))
						{
							func_69(3);
							func_1(3, 1);
						}
						iLocal_38 = 2;
					}
				}
				else
				{
					iLocal_38 = 2;
				}
				break;
			
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_2(func_3(3)))
					{
						MISC::SET_BIT(&iLocal_105, 15);
						HUD::CLEAR_HELP(true);
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

void func_218()
{
	if ((((!func_103(func_104()) && !func_103(35)) && !func_214(func_89())) && !func_213()) && !func_117())
	{
		if (iLocal_1270 < 2 && (MISC::GET_GAME_TIMER() - iLocal_1269) > 480000)
		{
			if (iLocal_42 != 2)
			{
				func_69(44);
			}
			else
			{
				func_69(45);
			}
			iLocal_1270++;
		}
	}
}

int func_219()
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

void func_220()
{
	if (func_75())
	{
		if (MISC::IS_BIT_SET(iLocal_105, 2))
		{
			if (func_85(iLocal_109))
			{
				func_21(iLocal_109, Local_110, fLocal_113, 25, 1);
				func_20(&iLocal_109);
			}
			MISC::CLEAR_BIT(&iLocal_105, 2);
		}
		func_1(46, 1);
		func_250(0);
	}
}

void func_221()
{
	if (!func_226())
	{
		if (!func_219())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					func_223();
				}
			}
		}
	}
	else if (iLocal_37 != 3)
	{
		func_222();
	}
}

void func_222()
{
	if (iLocal_37 != 4)
	{
		if (iLocal_37 != 2)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_110933)
			{
				MISC::SET_BIT(&iLocal_105, 15);
				HUD::CLEAR_HELP(true);
			}
			if (MISC::IS_BIT_SET(iLocal_105, 0))
			{
				if (func_85(iLocal_109))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_109, false);
				}
				func_20(&iLocal_109);
				func_158();
				if (iLocal_42 != 2)
				{
					Local_106 = { 0f, 0f, 0f };
				}
				MISC::CLEAR_BIT(&iLocal_105, 8);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_105, 0))
		{
			func_21(iLocal_109, Local_110, fLocal_113, 25, 1);
			if (func_85(iLocal_109))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_109, false);
			}
			func_20(&iLocal_109);
			func_158();
		}
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(5, false);
			MISC::CLEAR_BIT(&iLocal_105, 4);
			MISC::CLEAR_BIT(&iLocal_105, 5);
			func_250(0);
			if (func_210())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_37 = 3;
	}
}

void func_223()
{
	func_225();
	if (MISC::IS_BIT_SET(iLocal_105, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_105, 5) && !MISC::IS_BIT_SET(iLocal_105, 16))
		{
			HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
			{
				MISC::SET_BIT(&iLocal_105, 5);
			}
			if (MISC::IS_BIT_SET(iLocal_105, 5))
			{
				func_224();
				iLocal_39 = 0;
				MISC::CLEAR_BIT(&iLocal_105, 7);
				MISC::CLEAR_BIT(&iLocal_105, 0);
				MISC::CLEAR_BIT(&iLocal_105, 1);
				if (func_2(func_3(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_4(0);
				iLocal_37 = Global_112293.f_10047.f_128;
			}
		}
	}
}

void func_224()
{
	if (!func_103(func_104()))
	{
		if (!MISC::IS_BIT_SET(iLocal_105, 12))
		{
			if (func_101())
			{
				if (iLocal_42 != 2)
				{
					func_69(44);
				}
				else
				{
					func_69(45);
				}
				MISC::SET_BIT(&iLocal_105, 12);
			}
		}
	}
}

void func_225()
{
	if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
	{
		MISC::SET_BIT(&iLocal_105, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_105, 4);
	}
}

int func_226()
{
	if (iLocal_42 != 2)
	{
		if (iLocal_42 == 1 && func_89() == 2)
		{
			if (!MISC::IS_BIT_SET(iLocal_105, 16))
			{
				MISC::SET_BIT(&iLocal_105, 16);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iLocal_105, 16))
		{
			MISC::CLEAR_BIT(&iLocal_105, 16);
		}
		if (func_227())
		{
			return 0;
		}
	}
	else if (func_103(35))
	{
		return 0;
	}
	else if (func_227())
	{
		return 0;
	}
	return 1;
}

int func_227()
{
	if (((((Global_42009 == 15 && !func_169()) && Global_77245 == -1) && !func_210()) && !func_228(1112014848)) && !Global_111348)
	{
		return 1;
	}
	return 0;
}

int func_228(float fParam0)
{
	if (iLocal_42 == 1)
	{
		if (func_76(PLAYER::PLAYER_PED_ID(), Global_95316[1 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 2)
	{
		if (func_76(PLAYER::PLAYER_PED_ID(), Global_95316[0 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 0)
	{
		if (func_76(PLAYER::PLAYER_PED_ID(), Global_95316[3 /*15*/], fParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_229()
{
	if (!MISC::IS_BIT_SET(iLocal_105, 13))
	{
		if (func_230())
		{
			MISC::SET_BIT(&iLocal_105, 13);
		}
	}
	else if (!func_230())
	{
		MISC::CLEAR_BIT(&iLocal_105, 7);
		MISC::CLEAR_BIT(&iLocal_105, 0);
		MISC::CLEAR_BIT(&iLocal_105, 1);
		MISC::CLEAR_BIT(&iLocal_105, 13);
	}
}

int func_230()
{
	if (((((func_231(39) || func_231(40)) || func_231(41)) || func_231(42)) || func_231(43)) || func_231(44))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	return func_232(iParam0, 6, 1);
}

int func_232(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_99422.f_1378[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_96() == 0)
		{
			return MISC::IS_BIT_SET(func_233(func_235(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_234(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_234(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_99();
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

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10402;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12074;
}

int func_236(int iParam0)
{
	if (func_86(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_237(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_110933 && iParam1)
	{
		if (func_2(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_112293.f_20408.f_145 - 2))
			{
				func_240(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_239((Global_112293.f_20408.f_145 - 1));
			Global_112293.f_20408.f_145 = (Global_112293.f_20408.f_145 - 1);
			func_238();
			return;
		}
		iVar0++;
	}
}

void func_238()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112293.f_20408.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::IS_BIT_SET(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/].f_4), "", 16);
	Global_112293.f_20408[iParam0 /*16*/].f_8 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = -1;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = 0;
}

void func_240(int iParam0, int iParam1)
{
	Global_112293.f_20408[iParam0 /*16*/] = { Global_112293.f_20408[iParam1 /*16*/] };
	Global_112293.f_20408[iParam0 /*16*/].f_4 = { Global_112293.f_20408[iParam1 /*16*/].f_4 };
	Global_112293.f_20408[iParam0 /*16*/].f_8 = Global_112293.f_20408[iParam1 /*16*/].f_8;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = Global_112293.f_20408[iParam1 /*16*/].f_10;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = Global_112293.f_20408[iParam1 /*16*/].f_9;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = Global_112293.f_20408[iParam1 /*16*/].f_11;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = Global_112293.f_20408[iParam1 /*16*/].f_12;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = Global_112293.f_20408[iParam1 /*16*/].f_13;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = Global_112293.f_20408[iParam1 /*16*/].f_14;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = Global_112293.f_20408[iParam1 /*16*/].f_15;
}

int func_241(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

void func_242(int iParam0)
{
	iLocal_42 = iParam0;
	if (iLocal_42 == 0)
	{
		sLocal_1272 = "FBIPRAU";
	}
	else if (iLocal_42 == 1)
	{
		sLocal_1272 = "AHFAUD";
	}
	else if (iLocal_42 == 2)
	{
		sLocal_1272 = "FHFAUD";
	}
	iLocal_192[0] = joaat("trash");
	iLocal_192[1] = joaat("towtruck");
	iLocal_192[2] = joaat("ambulance");
	iLocal_192[3] = joaat("barracks2");
	iLocal_192[4] = joaat("stretch");
	iLocal_192[5] = joaat("phantom");
	iLocal_192[6] = joaat("packer");
	iLocal_192[7] = joaat("blazer");
	iLocal_192[8] = joaat("blazer2");
	if (iLocal_42 != 0)
	{
		iLocal_192[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_192[9] = 0;
	}
	func_245();
	func_243();
	MISC::SET_BIT(&iLocal_105, 17);
	iLocal_1269 = MISC::GET_GAME_TIMER();
}

void func_243()
{
	sLocal_53[0] = "AM_H_FBIC1A";
	sLocal_53[1] = "AM_H_FBIC1B";
	sLocal_53[2] = "AM_H_FBIC1C";
	sLocal_53[3] = "PRC_WANT";
	sLocal_53[4] = "PRC_DROPOFF";
	sLocal_53[5] = "PRC_INVALVEH";
	sLocal_53[6] = "PRC_HEALTH";
	sLocal_53[7] = func_244(7);
	sLocal_53[8] = func_244(8);
	sLocal_53[9] = "PRC_USEFIRST";
	sLocal_53[10] = func_244(10);
	sLocal_53[11] = func_244(11);
	sLocal_53[13] = func_244(13);
	sLocal_53[12] = func_244(12);
	sLocal_53[14] = "PRC_UNUSE";
	sLocal_53[15] = "PRC_SEATS";
	sLocal_53[16] = "PRC_CBOBVAL";
	sLocal_53[17] = func_244(17);
	sLocal_53[18] = func_244(18);
	sLocal_53[20] = func_244(20);
	sLocal_53[21] = "PRC_PUBAREA";
	sLocal_53[22] = "PRC_LAWAREA";
	sLocal_53[23] = "PRC_RESAREA";
	sLocal_53[24] = "PRC_STOP";
	sLocal_53[25] = "PRC_OWNEDM";
	sLocal_53[26] = "PRC_OWNEDF";
	sLocal_53[27] = "PRC_OWNEDT";
	sLocal_53[28] = "PRC_SECROUTE";
	sLocal_53[29] = "PRC_CLOSELOT";
	sLocal_53[30] = "PRC_CLOSELES";
	sLocal_53[31] = "PRC_CLSAGNT";
	sLocal_53[32] = "PRC_CLOSESAFE_M";
	sLocal_53[33] = "PRC_CLOSESAFE_F";
	sLocal_53[34] = "PRC_CLOSESAFE_T";
	sLocal_53[35] = "PRC_PEDS";
	sLocal_53[36] = "PRC_WATER";
	sLocal_53[37] = "PRC_OBST";
	sLocal_53[38] = "PRC_OBSTVEH";
	sLocal_53[39] = "PRC_UPDWN";
	sLocal_53[40] = "PRC_NEARROAD";
	sLocal_53[41] = "PRC_ONROAD";
	sLocal_53[19] = "PRC_PLAN";
	sLocal_53[42] = "PRC_TOOSTEEP";
	sLocal_53[43] = "PRC_UNEVEN";
	sLocal_53[44] = "PRC_REMIND";
	sLocal_53[45] = "PRC_REMINDA";
}

char* func_244(int iParam0)
{
	char* sVar0;
	
	if (iLocal_42 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_42 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_42 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_245()
{
	sLocal_1249[0] = "ARMYB";
	sLocal_1249[1] = "AIRP";
	sLocal_1249[2] = "STAD";
	sLocal_1249[3] = "TERMINA";
	sLocal_1249[4] = "MOVIE";
	sLocal_1249[5] = "JAIL";
	sLocal_1249[6] = "OCEANA";
	sLocal_1249[7] = "GOLF";
	sLocal_1249[8] = "HORS";
	sLocal_1249[9] = "MTCHIL";
	sLocal_1249[10] = "MTGORDO";
	sLocal_1249[11] = "SANCHIA";
	sLocal_1249[12] = "TATAMO";
	Local_204[0 /*261*/][0 /*8*/] = { func_246("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_204[0 /*261*/][1 /*8*/] = { func_246("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_204[0 /*261*/][2 /*8*/] = { func_246("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_204[0 /*261*/][3 /*8*/] = { func_246("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_204[0 /*261*/][4 /*8*/] = { func_246("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_204[0 /*261*/][5 /*8*/] = { func_246("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_204[0 /*261*/][6 /*8*/] = { func_246("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_204[0 /*261*/][7 /*8*/] = { func_246("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_204[0 /*261*/][8 /*8*/] = { func_246("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_204[0 /*261*/][9 /*8*/] = { func_246("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_204[0 /*261*/][10 /*8*/] = { func_246("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_204[0 /*261*/][11 /*8*/] = { func_246("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_204[0 /*261*/][13 /*8*/] = { func_246("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_204[0 /*261*/][14 /*8*/] = { func_246("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][15 /*8*/] = { func_246("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][16 /*8*/] = { func_246("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][17 /*8*/] = { func_246("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][18 /*8*/] = { func_246("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][19 /*8*/] = { func_246("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][20 /*8*/] = { func_246("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_204[0 /*261*/][21 /*8*/] = { func_246("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_204[0 /*261*/][22 /*8*/] = { func_246("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_204[0 /*261*/][23 /*8*/] = { func_246("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_204[0 /*261*/][24 /*8*/] = { func_246("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_204[0 /*261*/][25 /*8*/] = { func_246("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_204[0 /*261*/][26 /*8*/] = { func_246("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_204[0 /*261*/][27 /*8*/] = { func_246("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_204[0 /*261*/][28 /*8*/] = { func_246("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_204[0 /*261*/][29 /*8*/] = { func_246("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_204[0 /*261*/][30 /*8*/] = { func_246("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_204[0 /*261*/][31 /*8*/] = { func_246("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_204[0 /*261*/].f_260 = 0;
	Local_204[0 /*261*/].f_257 = 32;
	Local_204[2 /*261*/][0 /*8*/] = { func_246("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_204[2 /*261*/][1 /*8*/] = { func_246("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_204[2 /*261*/][2 /*8*/] = { func_246("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_204[2 /*261*/][3 /*8*/] = { func_246("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_204[2 /*261*/][4 /*8*/] = { func_246("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_204[2 /*261*/][5 /*8*/] = { func_246("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[2 /*261*/][6 /*8*/] = { func_246("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[2 /*261*/].f_260 = 2;
	Local_204[2 /*261*/].f_257 = 7;
	Local_204[1 /*261*/][0 /*8*/] = { func_246("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_204[1 /*261*/][1 /*8*/] = { func_246("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_204[1 /*261*/][2 /*8*/] = { func_246("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_204[1 /*261*/][3 /*8*/] = { func_246("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_204[1 /*261*/][4 /*8*/] = { func_246("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_204[1 /*261*/][5 /*8*/] = { func_246("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_204[1 /*261*/][6 /*8*/] = { func_246("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_204[1 /*261*/][7 /*8*/] = { func_246("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_204[1 /*261*/][8 /*8*/] = { func_246("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_204[1 /*261*/][9 /*8*/] = { func_246("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_204[1 /*261*/][10 /*8*/] = { func_246("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_204[1 /*261*/][11 /*8*/] = { func_246("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_204[1 /*261*/][12 /*8*/] = { func_246("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_204[1 /*261*/][13 /*8*/] = { func_246("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_204[1 /*261*/][14 /*8*/] = { func_246("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_204[1 /*261*/][15 /*8*/] = { func_246("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_204[1 /*261*/][16 /*8*/] = { func_246("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_204[1 /*261*/][17 /*8*/] = { func_246("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_204[1 /*261*/][18 /*8*/] = { func_246("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_204[1 /*261*/][19 /*8*/] = { func_246("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_204[1 /*261*/][20 /*8*/] = { func_246("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_204[1 /*261*/][21 /*8*/] = { func_246("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_204[1 /*261*/].f_260 = 1;
	Local_204[1 /*261*/].f_257 = 22;
	Local_204[3 /*261*/][0 /*8*/] = { func_246("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][1 /*8*/] = { func_246("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][2 /*8*/] = { func_246("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][3 /*8*/] = { func_246("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][4 /*8*/] = { func_246("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_204[3 /*261*/][5 /*8*/] = { func_246("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_204[3 /*261*/][6 /*8*/] = { func_246("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_204[3 /*261*/][7 /*8*/] = { func_246("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_204[3 /*261*/][8 /*8*/] = { func_246("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_204[3 /*261*/][9 /*8*/] = { func_246("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_204[3 /*261*/][10 /*8*/] = { func_246("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_204[3 /*261*/][11 /*8*/] = { func_246("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_204[3 /*261*/][12 /*8*/] = { func_246("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_204[3 /*261*/][13 /*8*/] = { func_246("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_204[3 /*261*/][14 /*8*/] = { func_246("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_204[3 /*261*/][15 /*8*/] = { func_246("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_204[3 /*261*/][16 /*8*/] = { func_246("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_204[3 /*261*/][17 /*8*/] = { func_246("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_204[3 /*261*/][18 /*8*/] = { func_246("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_204[3 /*261*/][19 /*8*/] = { func_246("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_204[3 /*261*/][20 /*8*/] = { func_246("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_204[3 /*261*/][21 /*8*/] = { func_246("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_204[3 /*261*/][22 /*8*/] = { func_246("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_204[3 /*261*/][23 /*8*/] = { func_246("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_204[3 /*261*/][24 /*8*/] = { func_246("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_204[3 /*261*/][25 /*8*/] = { func_246("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_204[3 /*261*/][26 /*8*/] = { func_246("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_204[3 /*261*/][27 /*8*/] = { func_246("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_204[3 /*261*/][28 /*8*/] = { func_246("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_204[3 /*261*/][29 /*8*/] = { func_246("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_204[3 /*261*/][30 /*8*/] = { func_246("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_204[3 /*261*/].f_260 = 3;
	Local_204[3 /*261*/].f_257 = 31;
	if (func_236(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_1263 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
}

struct<8> func_246(char* sParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<8> Var0;
	
	Var0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param4 };
	Var0.f_7 = fParam7;
	return Var0;
}

void func_247(int iParam0, bool bParam1)
{
	if (func_85(iLocal_109))
	{
		func_20(&iLocal_109);
	}
	if (!bParam1)
	{
		func_248(iParam0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_249()
{
	if (func_103(35))
	{
		func_91(35, 0);
		func_138(&uLocal_1439);
	}
	func_142(&iLocal_1438);
}

void func_250(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_42 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_258(sVar0);
		}
		else if (iLocal_42 == 0)
		{
			if (func_89() == 0)
			{
				func_257(sVar0);
				func_256(sVar0);
			}
			else if (func_89() == 1)
			{
				func_255(sVar0);
			}
			else
			{
				func_255(sVar0);
			}
		}
		else if (iLocal_42 == 1)
		{
			if (func_89() == 0)
			{
				func_257(sVar0);
				func_258(sVar0);
			}
			else if (func_89() == 1)
			{
				func_255(sVar0);
				func_258(sVar0);
			}
			else
			{
				func_255(sVar0);
				func_258(sVar0);
			}
		}
		MISC::SET_BIT(&iLocal_105, 11);
	}
	else if (MISC::IS_BIT_SET(iLocal_105, 11))
	{
		func_254();
		func_253();
		func_252();
		func_251();
		MISC::CLEAR_BIT(&iLocal_105, 11);
	}
}

void func_251()
{
	StringCopy(&(Global_7506[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_252()
{
	StringCopy(&(Global_7506[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_253()
{
	StringCopy(&(Global_7506[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_254()
{
	StringCopy(&(Global_7506[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_255(char* sParam0)
{
	StringCopy(&(Global_7506[0 /*16*/].f_8), sParam0, 32);
}

void func_256(char* sParam0)
{
	StringCopy(&(Global_7506[2 /*16*/].f_8), sParam0, 32);
}

void func_257(char* sParam0)
{
	StringCopy(&(Global_7506[1 /*16*/].f_8), sParam0, 32);
}

void func_258(char* sParam0)
{
	StringCopy(&(Global_7506[3 /*16*/].f_8), sParam0, 32);
}

void func_259(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_260(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_260(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_238();
	}
}

int func_261(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_52(&(Global_76066.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_59(&(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_262(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_52(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_76066.f_555[0 /*21*/].f_3;
}

Vector3 func_263(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_52(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_76066.f_555[0 /*21*/];
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
	return 1;
}

