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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[2] = { 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[2] = { 0, 0 };
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67[2];
	float fLocal_74[2] = { 0f, 0f };
	struct<3> Local_77 = { 0, 0, 0 } ;
	float fLocal_80 = 0f;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118[2] = { 0, 0 };
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	char[] cLocal_139[8] = 0;
	struct<10> Local_140[16];
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = -1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 1000;
	var uLocal_315 = 1000;
	var uLocal_316 = 0;
	var uLocal_317 = 8;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 1;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	float fLocal_469 = 0f;
	struct<3> Local_470 = { 0, 0, 0 } ;
	struct<3> Local_473 = { 0, 0, 0 } ;
	int iLocal_476 = 0;
	struct<3> Local_477 = { 0, 0, 0 } ;
	float fLocal_480 = 0f;
	int iLocal_481[2] = { 0, 0 };
	int iLocal_484 = 0;
	struct<3> Local_485 = { 0, 0, 0 } ;
	struct<3> Local_488 = { 0, 0, 0 } ;
	struct<3> Local_491 = { 0, 0, 0 } ;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	bool bLocal_496 = 0;
	int iLocal_497 = 0;
	float fLocal_498 = 0f;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	struct<3> Local_501 = { 0, 0, 0 } ;
	int iLocal_504[2] = { 0, 0 };
	int iLocal_507 = 0;
	float fLocal_508 = 0f;
	float fLocal_509 = 0f;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512[2] = { 0, 0 };
	int iLocal_515[2] = { 0, 0 };
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_81 = { 0.0203f, -3.1441f, 0.5027f };
	Local_84 = { 90f, 0f, 0f };
	Local_90 = { 0f, 0f, 0f };
	Local_93 = { 0f, 0f, 0f };
	iLocal_129 = 1;
	iLocal_130 = 1;
	cLocal_139 = "RESECAU";
	iLocal_465 = -1;
	fLocal_469 = -3.55f;
	Local_470 = { 0.014f, -0.9111f, 1.2317f };
	Local_473 = { 0f, -3.4368f, 1.2317f };
	iLocal_494 = -1;
	iLocal_495 = -1;
	iLocal_507 = -1;
	Local_87 = { Local_87 };
	Local_87 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SYSTEM::VDIST(Local_87, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_47 = 1;
	}
	else if (SYSTEM::VDIST(Local_87, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_47 = 2;
	}
	else if (SYSTEM::VDIST(Local_87, -389f, 6061f, 31f) < 5f)
	{
		iLocal_47 = 3;
	}
	else if (SYSTEM::VDIST(Local_87, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_47 = 4;
	}
	else if (SYSTEM::VDIST(Local_87, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_47 = 5;
	}
	else if (SYSTEM::VDIST(Local_87, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_47 = 6;
	}
	else if (SYSTEM::VDIST(Local_87, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_47 = 7;
	}
	else if (SYSTEM::VDIST(Local_87, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_47 = 8;
	}
	else if (SYSTEM::VDIST(Local_87, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_47 = 9;
	}
	else if (SYSTEM::VDIST(Local_87, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_47 = 10;
	}
	else
	{
		unk_0x4BFE89D21F9885DC();
	}
	if (Global_3)
	{
		if (iLocal_47 != 2)
		{
			unk_0x4BFE89D21F9885DC();
		}
	}
	else
	{
		if (unk_0x4210287E2833D44B(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
					{
						if (!unk_0xF41EB7643E61A928(iLocal_51[iVar0], iLocal_54, 0))
						{
							unk_0x95CA4545D0C61309(iLocal_51[iVar0], iLocal_54, -1, func_248(iLocal_54), 1073741824, 1, 0);
						}
					}
					else
					{
						unk_0x373635EFD76DFAB3(iLocal_51[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(Local_87, 9, iLocal_47, 1, 0))
		{
			unk_0x4BFE89D21F9885DC();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	uLocal_65 = unk_0x0823FA7465392E20(Local_77 + Vector(30f, 30f, 30f), Local_77 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_184(&uLocal_317);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0xE9F487B66E055135("RE_SV", 0);
			switch (iLocal_510)
			{
				case 0:
					if (unk_0xCC7E6EA219FD8BAC() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_46 == 3 && !(unk_0x3D6C3476988DE6E1(Local_77, 3f) && func_160(unk_0x7D2B9E6A64637269(), Local_77, 1) < 150f)) || iLocal_46 != 3)
							{
								if (iLocal_46 == 3)
								{
									if (!unk_0x3D6C3476988DE6E1(Local_77, 8f))
									{
										unk_0x6AF7EE4DD9F8B944(Local_77, 4f, 1, 0, 0, 0);
									}
									iLocal_48 = 4;
									bLocal_109 = true;
								}
								else
								{
									iLocal_48 = 1;
								}
								func_159();
								if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && iLocal_46 == 3)
								{
									unk_0x49CB177958B472A8(iLocal_54, 5f);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_510++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xBFCE58B2B3249999(iLocal_54, 0))
					{
						if (((SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) < 10000f || !unk_0x98E18969B1D0C4AB(iLocal_54)) || (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0x98E18969B1D0C4AB(iLocal_51[0]))) || (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && !unk_0x98E18969B1D0C4AB(iLocal_51[1])))
						{
							iLocal_510++;
						}
					}
					if (func_158())
					{
						iLocal_510++;
					}
					if (iLocal_510 != 1)
					{
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 2:
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iLocal_46 != 3)
						{
							func_153();
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_54) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (iLocal_46 == 3)
						{
							func_148();
							if (!unk_0x98E18969B1D0C4AB(iLocal_54) && (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!unk_0x98E18969B1D0C4AB(iLocal_54) && iLocal_48 == 4) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_96, Local_99, fLocal_102, 0, 1, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_48 == 4 && unk_0x98E18969B1D0C4AB(iLocal_54)) && iLocal_46 != 3)
						{
							if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_510 > 0)
			{
				if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && unk_0x98E18969B1D0C4AB(iLocal_54))
				{
					if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) > 62500f)
					{
						func_231();
					}
					if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) > 10000f && !unk_0xCC7E6EA219FD8BAC())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
			if (!unk_0x575B7C28D81C0B4D(uLocal_63))
			{
				if (!func_138(2) && !bLocal_114)
				{
					if (!unk_0xE8FFE38E2BA32BD6())
					{
						func_137("SV_VANHELP1", 15000);
						func_136(2);
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_56))
				{
					if (iLocal_511 != 0)
					{
						if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_56, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_511 = 0;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (((bLocal_109 && !unk_0xC2EBFA0B77E6B2D4(uLocal_137)) && unk_0xBFCE58B2B3249999(iLocal_54, 0)) && !bLocal_121)
				{
					if (iLocal_511 != 1)
					{
						if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_511 = 1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
				{
					if (iLocal_511 != 2)
					{
						if (SYSTEM::VDIST2(unk_0xCA4950AD4AC0DAD8(uLocal_137), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_511 = 2;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				if (iLocal_511 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_56))
					{
						func_128(&uLocal_305, iLocal_56, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_56, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 1)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 1))
					{
						func_128(&uLocal_305, iLocal_54, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				else if (iLocal_511 == 2)
				{
					if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
					{
						func_105(&uLocal_305, unk_0xCA4950AD4AC0DAD8(uLocal_137), 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(unk_0xCA4950AD4AC0DAD8(uLocal_137), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_511 = -1;
							func_135(&uLocal_305, 0, 0);
						}
					}
				}
				if (((!unk_0xE50EB54E0F21BED0(iLocal_54, 0) && bLocal_109) && !bLocal_111) && (!func_138(0) || (unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), joaat("weapon_stickybomb"), 0) && !func_138(1))))
				{
					switch (iLocal_134)
					{
						case 0:
							if (!unk_0xE8FFE38E2BA32BD6() && SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 225f)
							{
								func_137("SV_DOORHELP1", 15000);
								func_136(0);
								iLocal_134++;
							}
							break;
						
						case 1:
							if (!unk_0xE8FFE38E2BA32BD6())
							{
								iLocal_135 = unk_0xDFB7BFA6482FEE1E();
								iLocal_134++;
							}
							break;
						
						case 2:
							if ((unk_0xDFB7BFA6482FEE1E() - iLocal_135) > 2000 && unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), joaat("weapon_stickybomb"), 0))
							{
								func_137("SV_DOORHELP2", 15000);
								func_136(1);
								iLocal_134++;
							}
							break;
						}
				}
				if (bLocal_111 || bLocal_121)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
				}
			}
			switch (iLocal_48)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
					{
						if (unk_0x4186C3700BC22329(iLocal_51[0]) != 3)
						{
							unk_0xF5139E9838774FFB(iLocal_51[0], 3);
						}
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
					{
						if (unk_0x4186C3700BC22329(iLocal_51[1]) != 3)
						{
							unk_0xF5139E9838774FFB(iLocal_51[1], 3);
						}
					}
					if (((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xE50EB54E0F21BED0(iLocal_51[0], 0)) && !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && !unk_0xE50EB54E0F21BED0(iLocal_51[1], 0))
					{
						iLocal_129 = 1;
						func_79(iLocal_51[1]);
						func_77(0, 1);
					}
					else if (iLocal_129 == 1)
					{
						if (unk_0xECEC7528A52B4EE8(iLocal_51[1]) || unk_0xE50EB54E0F21BED0(iLocal_51[1], 0))
						{
							iLocal_50 = 0;
							iLocal_129 = 0;
						}
						else
						{
							func_79(iLocal_51[1]);
						}
					}
					else if (iLocal_129 == 0)
					{
						if (unk_0xECEC7528A52B4EE8(iLocal_51[0]) || unk_0xE50EB54E0F21BED0(iLocal_51[0], 0))
						{
							iLocal_129 = -1;
						}
						else
						{
							func_79(iLocal_51[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && unk_0x27FC1B0077581B37(iLocal_54, -1, 0) == unk_0x7D2B9E6A64637269()) && !bLocal_113) && iLocal_48 != 8)
			{
				if (bLocal_109)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_110)
			{
				if (unk_0x8123E5D5BB4CBCC4(iLocal_66, 1862763509) != 5)
				{
					unk_0x78B2DF314748056B(5, iLocal_66, 1862763509);
					unk_0x78B2DF314748056B(5, 1862763509, iLocal_66);
				}
			}
			if (bLocal_111)
			{
				if ((unk_0xC2EBFA0B77E6B2D4(uLocal_137) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xCA4950AD4AC0DAD8(uLocal_137)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_121)
			{
				if (func_67())
				{
					bLocal_121 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0x419E13582192CFEA(iLocal_51[iVar2]))
				{
					if ((!unk_0xE50EB54E0F21BED0(iLocal_51[iVar2], 0) && !unk_0xECEC7528A52B4EE8(iLocal_51[iVar2])) && SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_51[0], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_54))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 0))
						{
							iVar3 = 1;
						}
					}
					if ((SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 10000f && unk_0x98E18969B1D0C4AB(iLocal_54)) || SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_107)
		{
			if (func_28())
			{
				iLocal_127 = unk_0xDFB7BFA6482FEE1E();
				bLocal_107 = true;
			}
		}
		if (bLocal_107)
		{
			if (!bLocal_108)
			{
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_127) > 5000)
				{
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
					if (func_27() < 30f)
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_108 = true;
						}
					}
					else
					{
						bLocal_108 = true;
					}
				}
			}
		}
		if (((unk_0xDFB7BFA6482FEE1E() - iLocal_127) > 10000 && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) && !iLocal_126)
		{
			iVar4 = unk_0xB36B8558948EA7A8(0, 3);
			if (iVar4 == 0)
			{
				unk_0xB63015EB91A2D1FF("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0xB63015EB91A2D1FF("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0xB63015EB91A2D1FF("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_126 = 1;
		}
		if (bLocal_108)
		{
			if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(func_3(), 1)) < SYSTEM::POW(50f, 2f))
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
					}
					unk_0x55B1A2570B28CF99(unk_0x1146A9AE09CE2B14(), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
				}
			}
		}
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0 && func_2())
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x7FA7EB6FAB2D276F(iLocal_54, 0) > 0f || unk_0x7FA7EB6FAB2D276F(iLocal_54, 1) > 0f)
			{
				if (unk_0xAFD2714E8B5AEB9F(iLocal_54) == 3)
				{
					unk_0x5C052A30B9FCA449(iLocal_54, 1);
				}
			}
			if (!bLocal_112)
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 0))
				{
					bLocal_112 = true;
				}
			}
			if (!bLocal_112)
			{
				if (unk_0x7FA7EB6FAB2D276F(iLocal_54, 0) == 0f && unk_0x7FA7EB6FAB2D276F(iLocal_54, 1) == 0f)
				{
					if (unk_0xAFD2714E8B5AEB9F(iLocal_54) == 1)
					{
						unk_0x5C052A30B9FCA449(iLocal_54, 3);
					}
				}
			}
		}
		if (iLocal_131 != 0)
		{
			if ((iLocal_48 == 8 || iLocal_48 == 6) || iLocal_48 == 4)
			{
				unk_0x3E5BA73CEA34D768(iLocal_131);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_56))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar5]) && !unk_0xE50EB54E0F21BED0(iLocal_51[iVar5], 0))
				{
					if (unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[iVar5]))
					{
						if (iLocal_48 == 1)
						{
							if (!iLocal_512[iVar5])
							{
								unk_0x5D19BDCFD0320F11(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x5D19BDCFD0320F11(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_512[iVar5] = 1;
							}
						}
						if (iLocal_48 == 7)
						{
							if (!iLocal_515[iVar5])
							{
								unk_0x5D19BDCFD0320F11(iLocal_51[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x5D19BDCFD0320F11(iLocal_51[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_515[iVar5] = 1;
							}
						}
						if (unk_0x24A466C655E8588A(iLocal_51[iVar5], 4) && !iLocal_115)
						{
							unk_0x4E06EA55E2B40658(iLocal_51[iVar5], 1);
							iLocal_115 = 1;
						}
					}
					else
					{
						if (iLocal_512[iVar5])
						{
							unk_0x461AA308E0671334(iLocal_51[iVar5], 0, -1056964608);
							unk_0x461AA308E0671334(iLocal_51[iVar5], 1, -1056964608);
							iLocal_512[iVar5] = 0;
						}
						if (iLocal_515[iVar5])
						{
							unk_0x461AA308E0671334(iLocal_51[iVar5], 0, -1056964608);
							unk_0x461AA308E0671334(iLocal_51[iVar5], 1, -1056964608);
							iLocal_515[iVar5] = 0;
						}
						if (iLocal_512[iVar5] || iLocal_515[iVar5])
						{
							iLocal_512[iVar5] = 0;
							iLocal_515[iVar5] = 0;
							unk_0x461AA308E0671334(iLocal_51[iVar5], 0, -1056964608);
							unk_0x461AA308E0671334(iLocal_51[iVar5], 1, -1056964608);
						}
						if (unk_0x24A466C655E8588A(iLocal_51[iVar5], 4) && iLocal_115)
						{
							unk_0x4E06EA55E2B40658(iLocal_51[iVar5], 1);
							iLocal_115 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_51)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar5]))
				{
					if (iLocal_512[iVar5] || iLocal_515[iVar5])
					{
						iLocal_512[iVar5] = 0;
						iLocal_515[iVar5] = 0;
						unk_0x461AA308E0671334(iLocal_51[iVar5], 0, -1056964608);
						unk_0x461AA308E0671334(iLocal_51[iVar5], 1, -1056964608);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_109 && !bLocal_496)
		{
			if (((((unk_0x419E13582192CFEA(iLocal_56) && unk_0x5976053523EA16C8(iLocal_56)) && !unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130])) && !unk_0x698F51FB33ADAF7B(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 3)) && !unk_0x698F51FB33ADAF7B(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x698F51FB33ADAF7B(iLocal_51[iLocal_130], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x4261814A9A26E86F(iLocal_51[iLocal_130], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_116)
		{
			if (unk_0x419E13582192CFEA(iLocal_54))
			{
				if (unk_0xA6E8FBD68548675F(iLocal_54, unk_0x7D2B9E6A64637269(), 1))
				{
					iLocal_116 = 1;
				}
				unk_0xA5030CC1B9A0FDA6(iLocal_54);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && (((unk_0xBFCE58B2B3249999(iLocal_54, 0) && bLocal_114) && unk_0xC2EBFA0B77E6B2D4(uLocal_137)) || (!unk_0xBFCE58B2B3249999(iLocal_54, 0) && unk_0xC2EBFA0B77E6B2D4(uLocal_137)))) && SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) < 20f) && SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xCA4950AD4AC0DAD8(uLocal_137)) < 20f)
	{
		iVar1 = unk_0x8DE28588CE3990E2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0xECEC7528A52B4EE8(iVar1))
		{
			if (unk_0x6471F4759775FCA4(iVar1) == joaat("s_m_y_cop_01") || unk_0x6471F4759775FCA4(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x8DE28588CE3990E2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0xECEC7528A52B4EE8(iVar1))
		{
			if (unk_0x6471F4759775FCA4(iVar1) == joaat("s_m_y_cop_01") || unk_0x6471F4759775FCA4(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x278BD89624D37226(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), fVar0, 0, 1024);
		if (unk_0xBFCE58B2B3249999(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x278BD89624D37226(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), fVar0, 0, 1024);
		if (unk_0xBFCE58B2B3249999(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
		{
			fVar0 = SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[0], 1));
			iVar1 = 0;
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
		{
			if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_51[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x75B41F5020877259(0);
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
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_23();
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
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_15();
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
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_14())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_13())
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
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_12();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_12()
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
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_13()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
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

void func_15()
{
	if (func_22(14))
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
		Global_19798 = func_16();
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

int func_16()
{
	func_17();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_20(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_19(unk_0x7D2B9E6A64637269());
			if (func_18(iVar0) && (!func_22(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_18(Global_112293.f_2361.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = uParam5;
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

float func_27()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
		{
			fVar0 = SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[0], 1));
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
		{
			if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[1], 1)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[1], 1));
			}
		}
	}
	return SYSTEM::SQRT(fVar0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (unk_0x419E13582192CFEA(iLocal_51[iVar1]))
			{
				if (((!unk_0xECEC7528A52B4EE8(iLocal_51[iVar1]) && unk_0xA6E8FBD68548675F(iLocal_51[iVar1], unk_0x7D2B9E6A64637269(), 1)) || unk_0xECEC7528A52B4EE8(iLocal_51[iVar1])) || unk_0xE50EB54E0F21BED0(iLocal_51[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && iLocal_116)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_121)
	{
		if (!bLocal_109)
		{
			if (unk_0x419E13582192CFEA(iLocal_56))
			{
				if (!unk_0x5976053523EA16C8(iLocal_56))
				{
					unk_0x04F4D55F2C0C756D(&iLocal_56);
					if (!unk_0xC2EBFA0B77E6B2D4(uLocal_137) && !bLocal_111)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_136) > 3000)
				{
					if (unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]) || unk_0x6B9E71121F5B8154(iLocal_51[iLocal_130]))
					{
						unk_0x3211C35423263392(iLocal_56, 1, 1);
						iLocal_136 = unk_0xDFB7BFA6482FEE1E();
					}
				}
			}
			else if (!unk_0xC2EBFA0B77E6B2D4(uLocal_137))
			{
				if (unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]) || ((!unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]) && unk_0x6B9E71121F5B8154(iLocal_51[iLocal_130])) && !bLocal_111))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x419E13582192CFEA(iLocal_56))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_56);
		}
		if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
		{
			unk_0xDB5C5980B9AE89B9(uLocal_137);
		}
	}
}

void func_30(struct<3> Param0, bool bParam3)
{
	if (!bLocal_121 && !bLocal_111)
	{
		if (!bParam3)
		{
			if (bLocal_109)
			{
				Param0 = { unk_0xEFC7485122683888(unk_0x9E695CE384C77EF0(iLocal_54, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			}
			else
			{
				Param0 = { unk_0xEFC7485122683888(unk_0xD6E677FAD7521410(iLocal_51[iLocal_130], 0), 1067030938, 1069547520) };
			}
		}
		unk_0x191DDA30577F440A(&uLocal_138, 3);
		unk_0x191DDA30577F440A(&uLocal_138, 4);
		unk_0x191DDA30577F440A(&uLocal_138, 1);
		if (bParam3)
		{
			uLocal_137 = unk_0x902811AB4D3F0E4F(joaat("pickup_money_security_case"), Param0, unk_0x4BB6BF4A85268A22(iLocal_56, 2), 0, uLocal_128, 2, 1, 0);
		}
		else
		{
			uLocal_137 = unk_0x3A63BEB7A1E25FB1(joaat("pickup_money_security_case"), Param0, uLocal_138, uLocal_128, 1, 0);
		}
		if (!unk_0x575B7C28D81C0B4D(uLocal_64))
		{
			uLocal_64 = func_31(uLocal_137);
		}
		if (unk_0x419E13582192CFEA(iLocal_56))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_56);
		}
		bLocal_111 = true;
	}
}

int func_31(var uParam0)
{
	return func_32(uParam0);
}

int func_32(var uParam0)
{
	var uVar0;
	
	if (!unk_0xC2EBFA0B77E6B2D4(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x214E857DC196E5F9(uParam0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_33(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	return uVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0x419E13582192CFEA(iLocal_57))
		{
			unk_0x94F15E506D091111(iLocal_54, 2, 0, 0);
			unk_0x94F15E506D091111(iLocal_54, 3, 0, 0);
			if (unk_0x419E13582192CFEA(iLocal_57))
			{
				unk_0x04F4D55F2C0C756D(&iLocal_57);
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if (bLocal_109)
			{
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7FA7EB6FAB2D276F(iLocal_54, 2) == 0f && unk_0x7FA7EB6FAB2D276F(iLocal_54, 3) == 0f)
			{
				if (unk_0x419E13582192CFEA(iLocal_56))
				{
					if (unk_0x5976053523EA16C8(iLocal_56))
					{
						unk_0x3211C35423263392(iLocal_56, 1, 1);
					}
					unk_0x0F1058706D5A58B4(iLocal_56, iLocal_54, 0, Local_81, Local_84, 0, 0, 0, 0, 2, 1);
					iLocal_49 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_111 && !bLocal_121)
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_54, 0))
				{
					if (((unk_0xBFCE58B2B3249999(iLocal_54, 0) && unk_0x7FA7EB6FAB2D276F(iLocal_54, 2) > 0.25f) && unk_0x7FA7EB6FAB2D276F(iLocal_54, 3) > 0.25f) || !unk_0xBFCE58B2B3249999(iLocal_54, 0))
					{
						if (unk_0x419E13582192CFEA(iLocal_56))
						{
							if (unk_0x5976053523EA16C8(iLocal_56))
							{
								unk_0x4569EA65F1B056ED(unk_0x5AD02BBC63E31E46(), "DOORS_BLOWN", unk_0xE8E46B75F88C4ACC(iLocal_54, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x3211C35423263392(iLocal_56, 1, 0);
								unk_0x3CBE9F07524C242D(iLocal_56, 1, 0);
								unk_0xC5DE9743D6DA2C15(iLocal_56);
								unk_0x3B3F13C4C5844979(iLocal_56, 1);
								Local_477 = { unk_0xD6E677FAD7521410(iLocal_56, 1) - unk_0xD6E677FAD7521410(iLocal_54, 1) * Vector(1.5f, 1.5f, 1.5f) };
								if (SYSTEM::VMAG(Local_477) > 10f)
								{
									Local_477 = { func_35(Local_477) };
									Local_477 = { Local_477 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_133 < 100)
								{
									iLocal_117 = 1;
								}
								unk_0xBC5268D1B5C5B73B(iLocal_56, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_476 = unk_0xDFB7BFA6482FEE1E();
							}
							else if (unk_0xB021B000E378B72D(unk_0xD6E677FAD7521410(iLocal_56, 1), unk_0x9E695CE384C77EF0(iLocal_54, Local_470), unk_0x9E695CE384C77EF0(iLocal_54, Local_473), 0) >= 1f)
							{
								iLocal_49 = 3;
								iLocal_123[0] = 0;
								iLocal_123[1] = 0;
							}
							else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_476) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x419E13582192CFEA(iLocal_54))
				{
					unk_0x94F15E506D091111(iLocal_54, 2, 0, 0);
					unk_0x94F15E506D091111(iLocal_54, 3, 0, 0);
					func_30(unk_0x9E695CE384C77EF0(iLocal_54, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_48 != 8)
			{
				func_68(8);
			}
			if (unk_0x419E13582192CFEA(iLocal_56) && !unk_0xC2EBFA0B77E6B2D4(uLocal_137))
			{
				if (unk_0x4DDAC4C80BACF92C(iLocal_56) == 0f && (unk_0xDFB7BFA6482FEE1E() - iLocal_476) > 1000)
				{
					func_30(unk_0xD6E677FAD7521410(iLocal_56, 1), 1);
					unk_0x04F4D55F2C0C756D(&iLocal_56);
				}
				else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_476) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(struct<3> Param0)
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

int func_36()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iLocal_57) && unk_0x5976053523EA16C8(iLocal_57))
	{
		if (!iLocal_466)
		{
			if (unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iLocal_57, 1), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0xCC09B877A009E41F(unk_0xD6E677FAD7521410(iLocal_57, 1), 0.3f, unk_0xBD366067DA5DC0DE(joaat("weapon_stickybomb")), 0))
			{
				iLocal_466 = 1;
			}
		}
		iVar0 = 0;
		unk_0x2991F881A49C91B1(unk_0xD6E677FAD7521410(iLocal_57, 1), 0.1f, 255, 0, 0, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_57, 1), 1f, 1) || (unk_0x16B4C536089C3CAD(2, unk_0xD6E677FAD7521410(iLocal_57, 1), 0.3f) && iLocal_466))
		{
			iLocal_117 = 1;
			iVar0 = 1;
		}
		if (unk_0x5E7C0A485B91DB87(iLocal_57) < iLocal_132 && unk_0xA6E8FBD68548675F(iLocal_57, unk_0x7D2B9E6A64637269(), 0))
		{
			iLocal_133 = (iLocal_133 + (iLocal_132 - unk_0x5E7C0A485B91DB87(iLocal_57)));
			unk_0xA5030CC1B9A0FDA6(iLocal_57);
		}
		if ((unk_0xDFB7BFA6482FEE1E() - iLocal_467) > 200 && unk_0x419E13582192CFEA(iLocal_54))
		{
			if (unk_0x47A71ED5EBF4D6CA(unk_0x9E695CE384C77EF0(iLocal_54, 0f, 0f, (1.2195f - 0.27f)), unk_0x9E695CE384C77EF0(iLocal_54, 0f, fLocal_469, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_467 = unk_0xDFB7BFA6482FEE1E();
				iLocal_468++;
			}
		}
		if (iLocal_468 > 5)
		{
			return 1;
		}
		if (iLocal_133 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_132 = unk_0x5E7C0A485B91DB87(iLocal_57);
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_38(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x3DBB16B468DC3E18(5, Param3, Param0) || (unk_0x3DBB16B468DC3E18(2, Param3, Param0) && !bParam10)) || (unk_0x3DBB16B468DC3E18(20, Param3, Param0) && !bParam10)) || unk_0x3DBB16B468DC3E18(4, Param3, Param0)) || (unk_0x3DBB16B468DC3E18(28, Param3, Param0) && !bParam10)) || unk_0x3DBB16B468DC3E18(32, Param3, Param0)) || unk_0x3DBB16B468DC3E18(25, Param3, Param0)) || unk_0x3DBB16B468DC3E18(9, Param3, Param0)) || (unk_0x3DBB16B468DC3E18(3, Param3, Param0) && !bParam10)) || (unk_0x3DBB16B468DC3E18(6, Param3, Param0) && !bParam10)) || unk_0x3DBB16B468DC3E18(0, Param3, Param0)) || unk_0x3DBB16B468DC3E18(1, Param3, Param0)) || unk_0x3DBB16B468DC3E18(23, Param3, Param0)) || unk_0x3DBB16B468DC3E18(34, Param3, Param0)) || unk_0x3DBB16B468DC3E18(14, Param3, Param0)) || (unk_0x3DBB16B468DC3E18(30, Param3, Param0) && !bParam10)) || (unk_0x3DBB16B468DC3E18(12, Param3, Param0) && !bParam10)) || unk_0x3DBB16B468DC3E18(7, Param3, Param0)) || (unk_0x3DBB16B468DC3E18(21, Param3, Param0) && !bParam10)) || (unk_0x3DBB16B468DC3E18(18, Param3, Param0) && !bParam10)) || unk_0x3DBB16B468DC3E18(15, Param3, Param0)) || unk_0x3DBB16B468DC3E18(10, Param3, Param0)) || unk_0x3DBB16B468DC3E18(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x16B4C536089C3CAD(5, Param6, iParam9) || (unk_0x16B4C536089C3CAD(2, Param6, iParam9) && !bParam10)) || (unk_0x16B4C536089C3CAD(20, Param6, iParam9) && !bParam10)) || unk_0x16B4C536089C3CAD(4, Param6, iParam9)) || (unk_0x16B4C536089C3CAD(28, Param6, iParam9) && !bParam10)) || unk_0x16B4C536089C3CAD(32, Param6, iParam9)) || unk_0x16B4C536089C3CAD(25, Param6, iParam9)) || unk_0x16B4C536089C3CAD(9, Param6, iParam9)) || (unk_0x16B4C536089C3CAD(3, Param6, iParam9) && !bParam10)) || (unk_0x16B4C536089C3CAD(6, Param6, iParam9) && !bParam10)) || unk_0x16B4C536089C3CAD(0, Param6, iParam9)) || unk_0x16B4C536089C3CAD(1, Param6, iParam9)) || unk_0x16B4C536089C3CAD(23, Param6, iParam9)) || unk_0x16B4C536089C3CAD(34, Param6, iParam9)) || unk_0x16B4C536089C3CAD(14, Param6, iParam9)) || (unk_0x16B4C536089C3CAD(30, Param6, iParam9) && !bParam10)) || (unk_0x16B4C536089C3CAD(12, Param6, iParam9) && !bParam10)) || unk_0x16B4C536089C3CAD(7, Param6, iParam9)) || (unk_0x16B4C536089C3CAD(21, Param6, iParam9) && !bParam10)) || (unk_0x16B4C536089C3CAD(18, Param6, iParam9) && !bParam10)) || unk_0x16B4C536089C3CAD(15, Param6, iParam9)) || unk_0x16B4C536089C3CAD(10, Param6, iParam9)) || unk_0x16B4C536089C3CAD(27, Param6, iParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0x575B7C28D81C0B4D(uLocal_63))
	{
		if (!bLocal_110)
		{
			if ((!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && unk_0xBFCE58B2B3249999(iLocal_54, 0)) && !bLocal_121)
			{
				if (!bLocal_109)
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_60[1]))
					{
						uLocal_60[1] = func_42(iLocal_51[1], 0, 145);
					}
				}
				else
				{
					if (unk_0x575B7C28D81C0B4D(uLocal_60[1]))
					{
						unk_0x1AD5BCFEC31BB8D9(&(uLocal_60[1]));
					}
					if (!unk_0x575B7C28D81C0B4D(uLocal_59))
					{
						uLocal_59 = func_40(iLocal_54, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_60[1]))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_60[1]));
				}
				if (unk_0x575B7C28D81C0B4D(uLocal_59))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_59);
				}
			}
		}
		else
		{
			if (unk_0x575B7C28D81C0B4D(uLocal_60[0]) && unk_0x96729F0BA9418850(uLocal_60[0]) != 119)
			{
				unk_0x1AD5BCFEC31BB8D9(&(uLocal_60[0]));
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_60[1]) && unk_0x96729F0BA9418850(uLocal_60[1]) != 119)
			{
				unk_0x1AD5BCFEC31BB8D9(&(uLocal_60[1]));
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_59) && unk_0x96729F0BA9418850(uLocal_59) != 119)
			{
				unk_0x1AD5BCFEC31BB8D9(&uLocal_59);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
					{
						if (unk_0xF41EB7643E61A928(iLocal_51[iVar0], iLocal_54, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0x575B7C28D81C0B4D(uLocal_59))
				{
					uLocal_59 = func_40(iLocal_54, 1, 0);
				}
			}
			else if (unk_0x575B7C28D81C0B4D(uLocal_59))
			{
				unk_0x1AD5BCFEC31BB8D9(&uLocal_59);
			}
			if ((unk_0xBFCE58B2B3249999(iLocal_54, 0) && unk_0x575B7C28D81C0B4D(uLocal_59)) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 0))
				{
					if (unk_0x5D8B0ADD9EFBD7B9(uLocal_59) != 0)
					{
						unk_0x97A41BF3F05FC07D(uLocal_59, 0);
					}
				}
				else if (unk_0x5D8B0ADD9EFBD7B9(uLocal_59) != 255)
				{
					unk_0x97A41BF3F05FC07D(uLocal_59, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (!unk_0xC2EBFA0B77E6B2D4(uLocal_137) && !unk_0xC49311A2A500FF09(iLocal_51[iVar0], 0))
					{
						if (!unk_0x11DBA82F76F3C4C2(iLocal_51[iVar0]) || SYSTEM::VDIST(unk_0xD6E677FAD7521410(iLocal_51[iVar0], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_48 == 8 && !unk_0xC49311A2A500FF09(iLocal_51[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_48 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_60[iVar0]))
					{
						uLocal_60[iVar0] = func_42(iLocal_51[iVar0], 1, 145);
					}
				}
				else if (unk_0x575B7C28D81C0B4D(uLocal_60[iVar0]))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_60[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xC2EBFA0B77E6B2D4(uLocal_137) && !bLocal_121)
			{
				if (!unk_0x575B7C28D81C0B4D(uLocal_64))
				{
					uLocal_64 = func_32(uLocal_137);
				}
			}
			else if (unk_0x575B7C28D81C0B4D(uLocal_64))
			{
				unk_0x1AD5BCFEC31BB8D9(&uLocal_64);
			}
		}
	}
	else if ((unk_0x419E13582192CFEA(iLocal_54) && unk_0x419E13582192CFEA(iLocal_51[0])) && unk_0x419E13582192CFEA(iLocal_51[1]))
	{
		if ((((((!unk_0x98E18969B1D0C4AB(iLocal_54) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_54, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x98E18969B1D0C4AB(iLocal_51[0]) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_51[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x98E18969B1D0C4AB(iLocal_51[1]) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_51[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_54, 50f, 50f, 20f, 0, 1, 0)) || unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_51[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_51[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_63);
		}
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_60[0]))
	{
		unk_0xB5E587F8B911573B(uLocal_60[0], iLocal_122);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_60[1]))
	{
		unk_0xB5E587F8B911573B(uLocal_60[1], iLocal_122);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_59))
	{
		unk_0xB5E587F8B911573B(uLocal_59, iLocal_122);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_64))
	{
		unk_0xB5E587F8B911573B(uLocal_64, iLocal_122);
	}
	if (!iLocal_122)
	{
		if (bLocal_110 || iLocal_49 == 3)
		{
			iLocal_122 = 0;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_33(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_33(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_33(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_42(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x575B7C28D81C0B4D(uVar0)) && unk_0x49875FC4498CDA9A(&(Global_1878[iParam2 /*29*/].f_3)))
	{
		unk_0xDD944E3FD2028A48(uVar0, &(Global_1878[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_43()
{
	func_45(9, iLocal_47);
	while (!func_44())
	{
		SYSTEM::WAIT(0);
	}
	func_231();
}

int func_44()
{
	return 1;
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_112293.f_24993.f_2 = 3;
		}
		if (func_55(iParam0, iParam1) != 322)
		{
			func_47(func_55(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_112281 = iParam1;
		if (Global_112279 == 0)
		{
			if (((Global_112282 == 1 || Global_112282 == 5) || Global_112282 == 11) || Global_112282 == 25)
			{
				func_46(2);
			}
			else if ((Global_112282 == 26 || Global_112282 == 8) || Global_112282 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_112279 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1, 1);
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
		Global_112293.f_10192[iParam0 /*12*/].f_10 = uParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_48();
	}
}

void func_48()
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
			if (!unk_0x234B68AC2E35ED5A(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					unk_0x94F7E80BDFF33F26(joaat("num_rndevents_completed"), Global_112016, 0);
					unk_0x191DDA30577F440A(&(Global_112293.f_10192.f_3856), 14);
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
	unk_0xAC4FD27671081628(joaat("num_missions_completed"), Global_112029, 1);
	unk_0xAC4FD27671081628(joaat("num_missions_available"), Global_112012, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_completed"), Global_112030, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_available"), Global_112013, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_completed"), Global_112031, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_available"), Global_112014, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_completed"), Global_112032, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_available"), Global_112015, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_available"), Global_112019, 1);
	unk_0xAC4FD27671081628(joaat("num_misc_completed"), (Global_112035 + Global_112034), 1);
	unk_0xAC4FD27671081628(joaat("num_misc_available"), (Global_112018 + Global_112017), 1);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	unk_0xBAE77BA3A38F7944(joaat("total_progress_made"), Global_112293.f_10192.f_3853, 1);
	unk_0xAC4FD27671081628(joaat("percent_story_missions"), Global_112036, 1);
	unk_0xAC4FD27671081628(joaat("percent_ambient_missions"), Global_112037, 1);
	unk_0xAC4FD27671081628(joaat("percent_oddjobs"), Global_112038, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112293.f_10192.f_3853))
	{
		func_52(13, SYSTEM::FLOOR(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_51() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
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

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_51()
{
	return Global_31345;
}

int func_52(int iParam0, int iParam1)
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
	iVar0 = unk_0x37A2D5DD137657EB(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x74634292CAC72DD6(iParam0, iParam1);
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_54();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_54()
{
	return Global_1312763;
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_20408.f_150[iVar1]), iVar0);
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xDA654EB115F9FF7D(sParam0, ""))
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
		if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (unk_0xDFB7BFA6482FEE1E() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((unk_0xDFB7BFA6482FEE1E() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_60();
	}
}

void func_60()
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
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_61()
{
	func_17();
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

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20408.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_63(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_112293.f_24993.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_65()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x471C98FD94C0A5FD(), 64);
	uVar16 = func_66(Var0);
	return uVar16;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x15173FB88ABC94F9(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_67()
{
	if (bLocal_111)
	{
		if (unk_0x21C88062F3ECEF83(uLocal_137))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	iLocal_48 = iParam0;
	iLocal_50 = 0;
}

int func_69()
{
	if (!unk_0xC2EBFA0B77E6B2D4(uLocal_137))
	{
		if (bLocal_109)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
			{
				if (!func_70(iLocal_54))
				{
					if (iLocal_465 == -1)
					{
						iLocal_465 = unk_0xDFB7BFA6482FEE1E();
					}
				}
				else if (iLocal_465 != -1)
				{
					iLocal_465 = -1;
				}
			}
		}
		if (!bLocal_109)
		{
			if (iLocal_130 != -1)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]))
				{
					if (!func_70(iLocal_54))
					{
						if (iLocal_465 == -1)
						{
							iLocal_465 = unk_0xDFB7BFA6482FEE1E();
						}
					}
					else if (iLocal_465 != -1)
					{
						iLocal_465 = -1;
					}
				}
			}
		}
		if (iLocal_465 != -1)
		{
			if ((unk_0xDFB7BFA6482FEE1E() - iLocal_465) > 3000)
			{
				unk_0x0F3BD19FF11738D3(&(iLocal_51[0]));
				unk_0x0F3BD19FF11738D3(&(iLocal_51[1]));
				unk_0x90ED32458AC2D129(iLocal_54, -1000f, 1);
				unk_0x3CBE9F07524C242D(iLocal_54, 1, 0);
				unk_0x795957CD3A0042C8(&iLocal_54);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_465 != -1)
		{
			iLocal_465 = -1;
		}
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && SYSTEM::VDIST(unk_0xCA4950AD4AC0DAD8(uLocal_137), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x98E18969B1D0C4AB(iParam0) && SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam0, 1)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_507 == -1)
	{
		iLocal_507 = unk_0xDFB7BFA6482FEE1E();
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		switch (iLocal_50)
		{
			case 0:
				bLocal_110 = true;
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
				{
					if (func_27() < 30f && !unk_0xECEC7528A52B4EE8(Local_140[3 /*10*/]))
					{
						func_4(&Local_140, cLocal_139, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]) && unk_0x419E13582192CFEA(iLocal_56))
					{
						if ((iVar0 != iLocal_130 || bLocal_109) || !unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[iVar0]))
						{
							unk_0xCA089CD1A17D76DF(iLocal_51[iVar0]);
							unk_0x5C679902079A7E80(&uLocal_58);
							if (unk_0xC49311A2A500FF09(iLocal_51[iVar0], 0))
							{
								if (iLocal_117)
								{
									if (unk_0x472AC3055A188881("move_injured_generic"))
									{
										unk_0xC63C967EC1D348E4(iLocal_51[iVar0], "move_injured_generic", 1048576000);
										iLocal_118[iVar0] = 1;
									}
								}
								unk_0xCC5ED49CF9C9215F(0, 0, 256);
							}
							unk_0x880C7B361C9651EE(0);
							if (iLocal_118[iVar0])
							{
								unk_0x373635EFD76DFAB3(0, unk_0xB36B8558948EA7A8(1000, 3000));
							}
							unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
							unk_0x1BBD0A5729AB1226(uLocal_58);
							unk_0x8A1AC8EBC73850C8(iLocal_51[iVar0], uLocal_58);
							unk_0x8D5B447F21217223(&uLocal_58);
						}
						unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 6, 0);
						unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 0, 1);
						unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 1, 0);
						unk_0xEA480A62F5D29812(iLocal_51[iVar0], 1);
						unk_0x2BDB866C1791F9D7(iLocal_51[iVar0], 1);
						unk_0xBE91B077ADADE97F(iLocal_51[iVar0], 1);
					}
					iVar0++;
				}
				if ((unk_0x419E13582192CFEA(iLocal_56) && unk_0x5976053523EA16C8(iLocal_56)) && !unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]))
				{
					unk_0xCA089CD1A17D76DF(iLocal_51[iLocal_130]);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_50++;
				break;
			
			case 1:
				if (func_76(iLocal_130))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]))
					{
						unk_0xCA089CD1A17D76DF(iLocal_51[iLocal_130]);
						unk_0x5C679902079A7E80(&uLocal_58);
						if (unk_0xC49311A2A500FF09(iLocal_51[iLocal_130], 0))
						{
							unk_0xCC5ED49CF9C9215F(0, 0, 256);
						}
						unk_0x880C7B361C9651EE(0);
						unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
						unk_0x1BBD0A5729AB1226(uLocal_58);
						unk_0x8A1AC8EBC73850C8(iLocal_51[iLocal_130], uLocal_58);
						unk_0x8D5B447F21217223(&uLocal_58);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
				{
					if (unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
					{
						if (Local_140[3 /*10*/] != iLocal_51[1])
						{
							func_75(&Local_140, 3);
							func_75(&Local_140, 4);
							func_74(&Local_140, 3, iLocal_51[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_51)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
						{
							if ((iLocal_49 == 2 && !iLocal_123[iVar0]) && !unk_0xE50EB54E0F21BED0(iLocal_54, 0))
							{
								unk_0xB263F75DA9A6E89D(iLocal_51[iVar0], iLocal_54, unk_0x9E695CE384C77EF0(iLocal_54, 0f, -4f, 0f), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (((unk_0xC2EBFA0B77E6B2D4(uLocal_137) && !iLocal_123[iVar0]) && iLocal_49 == 3) && !bLocal_121)
							{
								unk_0xB263F75DA9A6E89D(iLocal_51[iVar0], iLocal_54, unk_0xCA4950AD4AC0DAD8(uLocal_137), 5f, 0);
								iLocal_123[iVar0] = 1;
							}
							if (bLocal_121)
							{
								if (iLocal_123[iVar0])
								{
									unk_0x1D6A97D1519EC3AD(iLocal_51[iVar0], 0);
									iLocal_123[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0xDFB7BFA6482FEE1E() - iLocal_500)) > unk_0x644B8DBA4F69BB73(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 4))
							{
								if (func_4(&Local_140, cLocal_139, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_500 = unk_0xDFB7BFA6482FEE1E();
								}
							}
						}
					}
					if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
					{
						if (!bLocal_109)
						{
							if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 0) && (unk_0xDFB7BFA6482FEE1E() - iLocal_507) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_109)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_48 != 8)
								{
									iLocal_123[0] = 0;
									iLocal_123[1] = 0;
									iLocal_507 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (SYSTEM::TIMERA() > iVar1 && iLocal_118[iVar0])
				{
					unk_0x87FB9C4434EDF1A5(iLocal_51[iVar0], 1048576000);
					iLocal_118[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	int iVar0;
	
	if ((unk_0xDFB7BFA6482FEE1E() - iLocal_484) > 250)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
				{
					if (unk_0x895779B17E5AA5FE(iLocal_51[iVar0], unk_0x7D2B9E6A64637269(), 19) && unk_0x80F0B256CF198970(iLocal_51[iVar0], unk_0x7D2B9E6A64637269()))
					{
						iLocal_481[iVar0] = 1;
					}
					else
					{
						iLocal_481[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_481[0] || iLocal_481[1]);
}

int func_73()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

void func_75(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_76(int iParam0)
{
	bool bVar0;
	
	if (unk_0x419E13582192CFEA(iLocal_56))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[iParam0]))
		{
			if (unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[iParam0]))
			{
				if (unk_0x698F51FB33ADAF7B(iLocal_51[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x4598B7969D5B0A28(iLocal_51[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x3211C35423263392(iLocal_56, 1, 1);
						unk_0x04F4D55F2C0C756D(&iLocal_56);
					}
				}
				else
				{
					unk_0xBE91B077ADADE97F(iLocal_51[iParam0], 1);
					unk_0x4261814A9A26E86F(iLocal_51[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x419E13582192CFEA(iLocal_56) || (unk_0x419E13582192CFEA(iLocal_56) && !unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[iParam0])));
	if (bVar0)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[iParam0]))
		{
			unk_0xBE91B077ADADE97F(iLocal_51[iParam0], 0);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	struct<3> Var5[2];
	int iVar12;
	bool bVar13;
	var uVar14;
	
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		Var0 = { func_35(unk_0x8EB57098C563AB39(iLocal_54, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1))) };
		fVar3 = ((unk_0xA8D713A937F31250(iLocal_54) + unk_0x832AD84AA258AE80(Var0.x, Var0.f_1)) + 45f);
		fVar4 = ((unk_0xA8D713A937F31250(iLocal_54) + unk_0x832AD84AA258AE80(Var0.x, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(iLocal_54, 1), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(iLocal_54, 1), fVar4, 0f, 4.5f, 0f) };
		func_78(&fVar3);
		func_78(&fVar4);
		if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_501) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_51)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar12]))
			{
				if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_51)
			{
				if ((((((!unk_0xECEC7528A52B4EE8(iLocal_51[iVar12]) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && SYSTEM::VDIST(unk_0xD6E677FAD7521410(iLocal_51[iVar12], 1), Var5[iVar12 /*3*/]) > 2f) && (unk_0xDFB7BFA6482FEE1E() - iLocal_504[iVar12]) > 1000) && !unk_0xC49311A2A500FF09(iLocal_51[iVar12], 0)) && !iLocal_481[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_501 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
						}
						unk_0x5C679902079A7E80(&uVar14);
						if (func_72() || func_38(Local_501))
						{
							unk_0xC3219A6FBFC09F37(0, Var5[iVar12 /*3*/], unk_0x7D2B9E6A64637269(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x2AA99ECF9FBD1E5D(0, unk_0x7D2B9E6A64637269(), -1, 1);
						}
						else
						{
							unk_0xD9925DC55D73CA5A(0, Var5[iVar12 /*3*/], Local_501, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
							unk_0x6D2DD90EB5862871(0, Local_501, -1, 1, 0);
						}
						unk_0x1BBD0A5729AB1226(uVar14);
						unk_0x8A1AC8EBC73850C8(iLocal_51[iVar12], uVar14);
						unk_0x8D5B447F21217223(&uVar14);
					}
					iLocal_504[iVar12] = unk_0xDFB7BFA6482FEE1E();
				}
				iVar12++;
			}
		}
	}
}

void func_78(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)
{
	float fVar0;
	
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!bLocal_109)
				{
					unk_0xBE91B077ADADE97F(iParam0, 1);
					unk_0xCA089CD1A17D76DF(iParam0);
					Local_485 = { unk_0xE8E46B75F88C4ACC(iLocal_54, 0) };
					Local_488 = { unk_0x4BB6BF4A85268A22(iLocal_54, 2) };
					Local_491 = { unk_0xBF480D363C51CDF8("random@security_van", "sec_case_into_van_panic", Local_485, Local_488, 0, 2) };
					if (((!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && !unk_0xE50EB54E0F21BED0(iLocal_51[1], 0)) && !unk_0xECEC7528A52B4EE8(iLocal_51[0])) && !unk_0xE50EB54E0F21BED0(iLocal_51[0], 0))
					{
						if (func_27() < 20f)
						{
							if (bLocal_110)
							{
								func_4(&Local_140, cLocal_139, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
						{
							if (bLocal_110)
							{
								unk_0x45B1B4E55BF15523(iParam0, unk_0xCA4950AD4AC0DAD8(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							}
							else
							{
								unk_0x45B1B4E55BF15523(iParam0, unk_0xCA4950AD4AC0DAD8(uLocal_137), 1f, -1, 0.25f, 0, 1193033728);
							}
							iLocal_50++;
						}
						else
						{
							func_85(iParam0);
							iLocal_50 = 2;
						}
					}
					else if (!unk_0xECEC7528A52B4EE8(iParam0))
					{
						if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
						{
							unk_0x45B1B4E55BF15523(iParam0, unk_0xCA4950AD4AC0DAD8(uLocal_137), 2f, -1, 0.25f, 0, 1193033728);
							iLocal_50++;
						}
						else
						{
							func_85(iParam0);
							iLocal_50 = 2;
						}
					}
				}
				else
				{
					iLocal_50 = 4;
				}
				break;
			
			case 1:
				if (!unk_0xECEC7528A52B4EE8(iParam0) && unk_0xC2EBFA0B77E6B2D4(uLocal_137))
				{
					if ((unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xCA4950AD4AC0DAD8(uLocal_137), 1) < 2f && !unk_0x6B9E71121F5B8154(iParam0)) && (unk_0xDFB7BFA6482FEE1E() - iLocal_136) > 3000)
					{
						if (unk_0x24A466C655E8588A(iParam0, 4))
						{
							unk_0x2FF622571073AA69(iParam0, joaat("weapon_unarmed"), 1);
						}
						unk_0xDB5C5980B9AE89B9(uLocal_137);
						func_85(iParam0);
						unk_0x2FF622571073AA69(iParam0, joaat("weapon_unarmed"), 1);
						bLocal_111 = false;
						iLocal_130 = iLocal_129;
						iLocal_50++;
					}
				}
				break;
			
			case 2:
				if (!unk_0xECEC7528A52B4EE8(iParam0) && unk_0xBFCE58B2B3249999(iLocal_54, 0))
				{
					if (unk_0x4E8DA737B686529A(iParam0, 713668775) != 1)
					{
						if (bLocal_110)
						{
							unk_0x45B1B4E55BF15523(iParam0, Local_491, 2f, -1, 0.1f, 512, Local_488.f_2);
						}
						else
						{
							unk_0x45B1B4E55BF15523(iParam0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
						}
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if (!unk_0xECEC7528A52B4EE8(iParam0))
				{
					if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
					{
						iLocal_50 = 0;
					}
					else
					{
						fVar0 = unk_0xA8D713A937F31250(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_488.f_2 > 180f)
						{
							Local_488.f_2 = (Local_488.f_2 - 360f);
						}
						if (Local_488.f_2 <= -180f)
						{
							Local_488.f_2 = (Local_488.f_2 + 360f);
						}
						if (SYSTEM::VDIST(Local_491, unk_0xD6E677FAD7521410(iParam0, 1)) < 0.3f)
						{
							if (unk_0x0BCA9ADE67DF9DD8((fVar0 - Local_488.f_2)) < 15f)
							{
								unk_0x34C71C0D521039D0(iParam0, -1056964608);
								unk_0xCA089CD1A17D76DF(iParam0);
								bLocal_496 = true;
								iLocal_494 = unk_0xD955F1CC0BCABC78(Local_485, Local_488, 2);
								if (bLocal_110)
								{
									unk_0xAD844C8843FC405C(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xED3365BAA5895E01(iLocal_54, iLocal_494, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0xAD844C8843FC405C(iParam0, iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xED3365BAA5895E01(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0xE37EB80DFB0D31FB(iParam0, 0, 0);
								iLocal_50++;
							}
						}
						else if (unk_0x98E18969B1D0C4AB(iParam0) && !unk_0x3D6C3476988DE6E1(Local_485, 2f))
						{
							unk_0x78CDDD1E6367978D(iParam0, Local_485, 1, 0, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xEEC203A73BC92E7E(iLocal_494))
				{
					if (bLocal_110)
					{
						fLocal_508 = 0.42f;
					}
					else
					{
						fLocal_508 = 0.3893f;
					}
					if (bLocal_110)
					{
						fLocal_509 = 0.52f;
					}
					else
					{
						fLocal_509 = 0.546243f;
					}
					if (!bLocal_109)
					{
						if ((unk_0x419E13582192CFEA(iLocal_56) && unk_0xDA872572A987B2AD(iLocal_56, iParam0)) && unk_0x0BC8768247440B3A(iLocal_494) > fLocal_508)
						{
							if (!unk_0xDA872572A987B2AD(iLocal_56, iLocal_54))
							{
								unk_0x3211C35423263392(iLocal_56, 1, 1);
								unk_0x3CBE9F07524C242D(iLocal_56, 0, 0);
								unk_0x0F1058706D5A58B4(iLocal_56, iLocal_54, 0, unk_0x8EB57098C563AB39(iLocal_54, unk_0xD6E677FAD7521410(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x0BC8768247440B3A(iLocal_494) > fLocal_509)
					{
						unk_0x90ED32458AC2D129(iLocal_54, -4f, 1);
						unk_0xCA089CD1A17D76DF(iParam0);
						if (unk_0x419E13582192CFEA(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x616B09EEEFED8FAF(iLocal_54, 2, 1);
							unk_0x616B09EEEFED8FAF(iLocal_54, 3, 1);
							unk_0xBE91B077ADADE97F(iParam0, 0);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xEEC203A73BC92E7E(iLocal_494) && unk_0x0BC8768247440B3A(iLocal_494) > fLocal_509) || !unk_0xEEC203A73BC92E7E(iLocal_494))
				{
					if (!bLocal_110)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
						{
							unk_0x95CA4545D0C61309(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_50++;
				}
				break;
			
			case 6:
				if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
				{
					if (bLocal_110)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
		{
			func_68(8);
		}
	}
	if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!bLocal_109)
		{
			if ((((((func_27() < 10f && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)) && func_72()) || ((func_27() < 20f && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)) && unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))) || (func_27() < 5f && bLocal_110)) || (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && func_80(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))) || ((!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0x419E13582192CFEA(unk_0x0BF0F8F3AD0993F6())) && func_80(unk_0x0BF0F8F3AD0993F6())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_48 != 7)
	{
		if (bLocal_109)
		{
			if (unk_0xEEC203A73BC92E7E(iLocal_494))
			{
				unk_0x90ED32458AC2D129(iLocal_54, -8f, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			unk_0xBE91B077ADADE97F(iParam0, 0);
		}
	}
	if ((unk_0xBFCE58B2B3249999(iLocal_54, 0) && iLocal_48 != 7) && unk_0xEEC203A73BC92E7E(iLocal_494))
	{
		unk_0x90ED32458AC2D129(iLocal_54, -8f, 1);
	}
}

int func_80(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7[4];
	struct<3> Var20[4];
	struct<3> Var33[4];
	struct<3> Var46[4];
	var uVar59;
	float fVar72;
	float fVar73;
	
	iVar0 = 0;
	if (unk_0x419E13582192CFEA(iParam0) && unk_0x419E13582192CFEA(iLocal_54))
	{
		uVar59 = 4;
		unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { unk_0x9E695CE384C77EF0(iParam0, Var1, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { unk_0x9E695CE384C77EF0(iParam0, Var4, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { unk_0x9E695CE384C77EF0(iParam0, Var4, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { unk_0x9E695CE384C77EF0(iParam0, Var1, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { unk_0x9E695CE384C77EF0(iLocal_54, fVar73, 1.5f, 0f) };
		if (!bLocal_109)
		{
			if (func_81(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xF41EB7643E61A928(iLocal_51[0], iLocal_54, 1))
		{
			if (func_81(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && !unk_0xF41EB7643E61A928(iLocal_51[1], iLocal_54, 1))
		{
			if (func_81(&Var46, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.x;
	fVar1 = Param3;
	fVar2 = Param6;
	fVar3 = Param9;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (!unk_0x419E13582192CFEA(iLocal_56))
		{
			iLocal_56 = unk_0x795434E153F90E41(iLocal_105, Local_77, 1, 1, 0);
			unk_0xC22CF0F8AABFA658(iLocal_56, 0);
		}
		if (unk_0x419E13582192CFEA(iLocal_56))
		{
			unk_0x0F1058706D5A58B4(iLocal_56, iParam0, unk_0xA79DFB802C09F5F5(iParam0, 28422), Local_90, Local_93, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iLocal_50)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
				{
					unk_0xBE91B077ADADE97F(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_110 = true;
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
			{
				if (unk_0x419E13582192CFEA(func_89()))
				{
					if (!unk_0xECEC7528A52B4EE8(func_89()))
					{
						if (unk_0x27FC1B0077581B37(iLocal_54, -1, 0) != func_89() && unk_0x9B73EB6255D4AE81(iLocal_54, -1, 0))
						{
							unk_0x95CA4545D0C61309(func_89(), iLocal_54, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && func_89() != iLocal_51[1])
				{
					if (unk_0x27FC1B0077581B37(iLocal_54, 0, 0) != iLocal_51[1] && unk_0x9B73EB6255D4AE81(iLocal_54, 0, 0))
					{
						unk_0x95CA4545D0C61309(iLocal_51[1], iLocal_54, -1, 0, 1073741824, 1, 0);
					}
				}
				iLocal_50++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (unk_0x419E13582192CFEA(func_89()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					unk_0x5B1F7232B835EC44(func_89(), iLocal_54, unk_0x7D2B9E6A64637269(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (unk_0x419E13582192CFEA(func_89()))
				{
					unk_0x7B5530AB21BFC748(func_89(), iLocal_54, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_50++;
				}
			}
			break;
		
		case 3:
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
			{
				if (unk_0x4DDAC4C80BACF92C(iLocal_54) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((unk_0x419E13582192CFEA(iLocal_54) && unk_0x419E13582192CFEA(unk_0x27FC1B0077581B37(iLocal_54, -1, 0))) && (unk_0xE50EB54E0F21BED0(unk_0x27FC1B0077581B37(iLocal_54, -1, 0), 0) || unk_0xECEC7528A52B4EE8(unk_0x27FC1B0077581B37(iLocal_54, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x27FC1B0077581B37(iLocal_54, -1, 0) == iLocal_51[0])
		{
			iVar1 = 1;
		}
		if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(iLocal_54, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 100f)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar1]) && unk_0x4E8DA737B686529A(iLocal_51[iVar1], 242628503) != 1)
			{
				unk_0x82D2BB48A39F1E88(iLocal_51[iVar1], 2, 1);
				unk_0x5C679902079A7E80(&uVar2);
				unk_0x0AA1D616883C0FC5(0, iLocal_54, 0);
				unk_0x5B1F7232B835EC44(0, iLocal_54, unk_0x7D2B9E6A64637269(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x1BBD0A5729AB1226(uVar2);
				unk_0x8A1AC8EBC73850C8(iLocal_51[iVar1], uVar2);
				unk_0x8D5B447F21217223(&uVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!unk_0xBFCE58B2B3249999(iLocal_54, 0) || unk_0xC2EBFA0B77E6B2D4(uLocal_137)) || iLocal_49 == 3) || unk_0x0D628BB90DA6214A(iLocal_54, 0, 7000)) || unk_0x0D628BB90DA6214A(iLocal_54, 3, 30000)) || unk_0x0D628BB90DA6214A(iLocal_54, 2, 30000)) || unk_0x0D628BB90DA6214A(iLocal_54, 1, 40000)) || (iLocal_50 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()
{
	if (unk_0x419E13582192CFEA(iLocal_54))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_54, 0))
		{
			if (((((unk_0x5E7C0A485B91DB87(iLocal_54) < 300 || unk_0x547F3E9F33EBE1F4(iLocal_54) < 200f) || (unk_0x3095B0C5EB2CFFEC(iLocal_54, 0, 0) && unk_0x3095B0C5EB2CFFEC(iLocal_54, 1, 0))) || (unk_0x3095B0C5EB2CFFEC(iLocal_54, 4, 0) && unk_0x3095B0C5EB2CFFEC(iLocal_54, 5, 0))) || (unk_0x3095B0C5EB2CFFEC(iLocal_54, 0, 0) && unk_0x3095B0C5EB2CFFEC(iLocal_54, 4, 0))) || (unk_0x3095B0C5EB2CFFEC(iLocal_54, 1, 0) && unk_0x3095B0C5EB2CFFEC(iLocal_54, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xE50EB54E0F21BED0(iLocal_51[0], 0))
		{
			if (!unk_0xF41EB7643E61A928(iLocal_51[0], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && !unk_0xE50EB54E0F21BED0(iLocal_51[1], 0))
		{
			if (!unk_0xF41EB7643E61A928(iLocal_51[1], iLocal_54, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xE50EB54E0F21BED0(iLocal_51[0], 0))
	{
		return iLocal_51[0];
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && !unk_0xE50EB54E0F21BED0(iLocal_51[1], 0))
	{
		return iLocal_51[1];
	}
	return 0;
}

void func_90()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_109)
			{
				if (unk_0x419E13582192CFEA(iLocal_56) && unk_0x5976053523EA16C8(iLocal_56))
				{
					unk_0x3211C35423263392(iLocal_56, 1, 1);
				}
			}
			if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_140, cLocal_139, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_51)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
					{
						unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 17, 1);
						unk_0x82D2BB48A39F1E88(iLocal_51[iVar0], 128, 1);
						unk_0x82D2BB48A39F1E88(iLocal_51[iVar0], 16, 1);
						unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 1, 0);
						unk_0x5C679902079A7E80(&uVar1);
						if (unk_0xC49311A2A500FF09(iLocal_51[iVar0], 1))
						{
							unk_0xCC5ED49CF9C9215F(iLocal_51[iVar0], 0, 256);
						}
						unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
						unk_0x1BBD0A5729AB1226(uVar1);
						unk_0x8A1AC8EBC73850C8(iLocal_51[iVar0], uVar1);
						unk_0x8D5B447F21217223(&uVar1);
					}
					iVar0++;
				}
			}
			bLocal_113 = true;
			iLocal_50++;
			break;
		
		case 1:
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
			{
				if (func_91(iLocal_54, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_50++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3CF5ADE443D18312(iParam0) + 1;
	if (iParam4 || !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_93(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x419E13582192CFEA(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x7D2B9E6A64637269())
				{
				}
				else if (bParam2)
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						iVar3 = unk_0xCB567ED25393C1DF(iVar2);
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_10()) && func_92(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x6C9038EC46DA62DE(unk_0xCB567ED25393C1DF(iVar2)) == 0)
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
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9B73EB6255D4AE81(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, iParam1);
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x4E8DA737B686529A(iVar0, 451360105) == 1 || unk_0x4E8DA737B686529A(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iParam0, 0), unk_0xD6E677FAD7521410(iVar0, 0)) < 10f)
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

void func_94()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_4(&Local_140, cLocal_139, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x419E13582192CFEA(iLocal_56) && unk_0x5976053523EA16C8(iLocal_56))
					{
						if (!unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[0]))
						{
							func_95(0);
						}
						else
						{
							unk_0xCA089CD1A17D76DF(iLocal_51[0]);
						}
						if (!unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[1]))
						{
							func_95(1);
						}
						else
						{
							unk_0xCA089CD1A17D76DF(iLocal_51[1]);
						}
						iLocal_50++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_50 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_130))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]))
					{
						func_95(iLocal_130);
					}
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_140, cLocal_139, "RESEC_CAR2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_50++;
					}
				}
				break;
			
			case 3:
				if ((SYSTEM::TIMERA() > 12000 && !func_73()) && func_4(&Local_140, cLocal_139, "RESEC_CAR3", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_50++;
				}
				break;
			
			case 4:
				if ((SYSTEM::TIMERA() > 7000 && !func_73()) && func_4(&Local_140, cLocal_139, "RESEC_CAR4", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_50 > 0)
	{
		func_77(-1, 1);
	}
	if (unk_0x419E13582192CFEA(iLocal_55))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_55, 0) && unk_0xBFCE58B2B3249999(iLocal_54, 0))
		{
			if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iLocal_55, 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) > 10f)
			{
				func_68(7);
			}
		}
		if ((unk_0xE50EB54E0F21BED0(iLocal_55, 0) || !unk_0xBFCE58B2B3249999(iLocal_55, 0)) || (!unk_0x1595C3E8842A8F45(iLocal_55, 1119092736) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_55, 1)))
		{
			if (!func_80(iLocal_55))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xA6E8FBD68548675F(iLocal_51[0], unk_0x7D2B9E6A64637269(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xA6E8FBD68548675F(iLocal_51[1], unk_0x7D2B9E6A64637269(), 1))
		{
			func_68(8);
		}
	}
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (iLocal_116)
		{
			func_68(8);
		}
	}
	if (bLocal_121)
	{
		func_68(8);
	}
	if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && func_72()) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 7))
	{
		func_68(2);
	}
	if (!unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		func_68(5);
	}
}

void func_95(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[iParam0]) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0xCA089CD1A17D76DF(iLocal_51[iParam0]);
		unk_0x5C679902079A7E80(&uLocal_58);
		if (unk_0xC49311A2A500FF09(iLocal_51[iParam0], 0))
		{
			unk_0xCC5ED49CF9C9215F(0, 0, 256);
		}
		unk_0x880C7B361C9651EE(0);
		unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 0, 2);
		unk_0x2AA99ECF9FBD1E5D(0, unk_0x7D2B9E6A64637269(), -1, 0);
		unk_0x1BBD0A5729AB1226(uLocal_58);
		unk_0x8A1AC8EBC73850C8(iLocal_51[iParam0], uLocal_58);
		unk_0x8D5B447F21217223(&uLocal_58);
		if (iLocal_131 == 0)
		{
			iLocal_131 = unk_0x24CBDE4C2EEE441C(118, unk_0xD6E677FAD7521410(iLocal_51[iParam0], 1), -1082130432);
		}
	}
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_50)
	{
		case 0:
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
			{
				unk_0xBE91B077ADADE97F(iLocal_51[0], 1);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
			{
				unk_0xBE91B077ADADE97F(iLocal_51[1], 1);
			}
			if (func_103())
			{
				if (func_4(&Local_140, cLocal_139, "RESEC_ATT1", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
			}
			else if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_140, cLocal_139, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 4))
				{
					func_4(&Local_140, cLocal_139, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				if (unk_0x419E13582192CFEA(iLocal_56) && unk_0x5976053523EA16C8(iLocal_56))
				{
					if (!unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[0]))
					{
						func_95(0);
					}
					else
					{
						unk_0xCA089CD1A17D76DF(iLocal_51[0]);
					}
					if (!unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[1]))
					{
						func_95(1);
					}
					else
					{
						unk_0xCA089CD1A17D76DF(iLocal_51[1]);
					}
					iLocal_50++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_50 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_130))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[iLocal_130]))
				{
					func_95(iLocal_130);
				}
				iLocal_50++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_54, 1000) && SYSTEM::TIMERA() > 10000)
				{
					bVar0 = true;
				}
				else if (SYSTEM::TIMERA() > 7000)
				{
					SYSTEM::SETTIMERA(7000);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_51)
				{
					if (!func_99(iLocal_51[iVar1], 1000) && (func_27() < 2f && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0xE50EB54E0F21BED0(iLocal_51[iVar1], 0))
					{
						if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_51[iVar1]) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_51[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((unk_0xDFB7BFA6482FEE1E() - iLocal_500)) > unk_0x644B8DBA4F69BB73(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_500 = unk_0xDFB7BFA6482FEE1E();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_51)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0x419E13582192CFEA(iLocal_51[iVar2]))
		{
			if ((unk_0xECEC7528A52B4EE8(iLocal_51[iVar2]) || unk_0xE50EB54E0F21BED0(iLocal_51[iVar2], 0)) && unk_0xA6E8FBD68548675F(iLocal_51[iVar2], unk_0x7D2B9E6A64637269(), 0))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((unk_0xECEC7528A52B4EE8(iLocal_51[0]) || unk_0xECEC7528A52B4EE8(iLocal_51[1])) || bLocal_121)
	{
		func_68(8);
	}
	if ((unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && func_72())
	{
		if (unk_0xA6E8FBD68548675F(iLocal_54, unk_0x7D2B9E6A64637269(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		func_68(5);
	}
	if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)) && unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_481[0] && !iLocal_481[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()
{
	Global_19991 = 0;
	func_98();
}

void func_98()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x419E13582192CFEA(iParam0))
		{
			if ((unk_0xA2CCAAC7F5CA3F49(iParam0) && !unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(iParam0))) || (unk_0x55F5BD4ABD80B211(iParam0) && unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(iParam0), 0)))
			{
				if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam0, 1)) > fLocal_498)
				{
					iVar0 = 1;
				}
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_499) > iParam1)
				{
					fLocal_498 = SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam0, 1));
					iLocal_499 = unk_0xDFB7BFA6482FEE1E();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_54, 20f, 20f, 5f, 0, 1, 0) && !unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_54, 0f, 1.7532f, 0.5984f), unk_0x9E695CE384C77EF0(iLocal_54, 0f, 3.3477f, 3.5984f), 2.8f, 0, 1, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
			{
				if ((!unk_0xF41EB7643E61A928(iLocal_51[iVar0], iLocal_54, 0) && unk_0x50EE6E8623617CB7(unk_0x7D2B9E6A64637269(), iLocal_54)) && SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269()) == iLocal_54)
		{
			if (unk_0x8F009EEA60C6F8F5(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && unk_0xD406352E21A7E1D0(iLocal_51[0], unk_0x7D2B9E6A64637269(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && unk_0xD406352E21A7E1D0(iLocal_51[1], unk_0x7D2B9E6A64637269(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 4) && unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_105(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_106(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x79CC60D128756F16())
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x4030103C8B148AFC(iVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!unk_0x79CC60D128756F16())
	{
		if (func_122(uParam0, bParam6, bParam8, 0))
		{
			func_121(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(iVar0))
			{
				if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if ((unk_0x3D6C3476988DE6E1(Param1, 1f) && !unk_0xE8FFE38E2BA32BD6()) && uParam7)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
			{
				if ((unk_0x3D6C3476988DE6E1(Param1, 1f) && !unk_0xE8FFE38E2BA32BD6()) && uParam7)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
						{
							func_110(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x4030103C8B148AFC(iVar0))
		{
			if (func_104(iVar0) && unk_0xE8FFE38E2BA32BD6())
			{
				unk_0x66AE54CE92457FEE(1);
			}
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
		{
			if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
			{
				func_135(uParam0, iVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0x7D2B9E6A64637269()))
	{
		unk_0x880C7B361C9651EE(unk_0x7D2B9E6A64637269());
	}
	if (unk_0x79CC60D128756F16())
	{
		unk_0xD6ABECE3CBB224B0(1);
		unk_0xD20D31BC4E3A72D3(0);
		unk_0xC0BBE340BE2AA02D("HINT_CAM_SCENE");
		unk_0xBAF2F13FE4D19AA9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9673FB069F90F6B9("FocusOut", 0, 0);
			unk_0x9B0169E27978C1A2(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_108(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0x55F5BD4ABD80B211(iParam0))
		{
			if (unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x50997FC21D62251F(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xDFB7BFA6482FEE1E()
		{
			return 1;
		}
	}
	return 0;
}

int func_110(bool bParam0)
{
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_112293.f_10047.f_100++;
			}
			return Global_112293.f_10047.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_112293.f_10047.f_101++;
			}
			return Global_112293.f_10047.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_112293.f_10047.f_102++;
			}
			return Global_112293.f_10047.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_111(char* sParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0xAB6A270F84A8781E(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return 0;
	}
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 0;
	}
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_59279)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
		{
			if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
			{
				return 0;
			}
			if (unk_0x7F827BDD9A88B58D())
			{
				return 0;
			}
		}
	}
	if ((func_118() || func_117(Global_4456448.f_133963)) || func_116())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_115(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_114(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1694746)
	{
		return 0;
	}
	if (func_113(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_92(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x622E46C9F30FB60D(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0xC49311A2A500FF09(iParam0, iParam1))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(iParam0, iParam1);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				iVar1 = unk_0xEF6894DFD91DE23D(unk_0x6471F4759775FCA4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9B73EB6255D4AE81(iVar0, iVar3, 0))
					{
						if (unk_0x27FC1B0077581B37(iVar0, iVar3, 0) == iParam0)
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

var func_116()
{
	return Global_2453009.f_19;
}

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2453009.f_18;
}

bool func_119()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD6ABECE3CBB224B0(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x5FACB8A2F85D58B4(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), Param1, -1, iVar2, iVar3);
	unk_0x9673FB069F90F6B9("FocusIn", 0, 0);
	unk_0xB84B43B766630B5C("HINT_CAM_SCENE");
	unk_0x9B0169E27978C1A2(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x366E7F593105797F(0, 140, 1);
			unk_0x366E7F593105797F(0, 80, 1);
			if (unk_0x6DC4D8B66C3E0EA0(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x366E7F593105797F(0, 80, 1);
		if (unk_0xC3AFE2B8AF48FCC8())
		{
			if (unk_0x6DC4D8B66C3E0EA0(0, 80))
			{
				unk_0xD6ABECE3CBB224B0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x366E7F593105797F(0, 140, 1);
			unk_0x366E7F593105797F(0, 80, 1);
			if (unk_0x51794501073F0A33(0, 80) && unk_0xDFB7BFA6482FEE1E() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x366E7F593105797F(0, 80, 1);
		if (unk_0xC3AFE2B8AF48FCC8())
		{
			if (unk_0x51794501073F0A33(0, 80) && unk_0xDFB7BFA6482FEE1E() > Global_116)
			{
				unk_0xD6ABECE3CBB224B0(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_127()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x79CC60D128756F16())
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x4030103C8B148AFC(iVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && unk_0x1F9D47D45E125FA6(iParam1))
	{
		iVar1 = 0;
		if (unk_0xA2CCAAC7F5CA3F49(iParam1))
		{
			unk_0xE10AFFAFED85BE48(unk_0xFAA5505029C4B5A6(iParam1));
			unk_0xED9E2F10D8093C4B(unk_0xFAA5505029C4B5A6(iParam1), 1);
			if (unk_0x906F86AA0011D5F8(unk_0xFAA5505029C4B5A6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55F5BD4ABD80B211(iParam1))
		{
			unk_0x8CA9CB0F4A5018B4(unk_0x611CD1312FD3CA66(iParam1));
			if (unk_0x6626CA37A88F93B9(unk_0x611CD1312FD3CA66(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x50997FC21D62251F(iParam1))
		{
			unk_0xC61A3EA05D996D93(unk_0x6F9D3E582271B7F5(iParam1));
			if (unk_0x88F676C35100CFCA(unk_0x6F9D3E582271B7F5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x79CC60D128756F16())
		{
			if (func_122(uParam0, bParam7, bParam9, 0))
			{
				func_131(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if ((iVar1 && !unk_0xE8FFE38E2BA32BD6()) && uParam8)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
				{
					if (((unk_0xB4E725A8915BDF60(iParam1) && iVar1) && !unk_0xE8FFE38E2BA32BD6()) && uParam8)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x4030103C8B148AFC(sParam5))
			{
				if (func_104(sParam5))
				{
					unk_0x66AE54CE92457FEE(1);
				}
			}
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
			{
				if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319203 == 1)
	{
		return;
	}
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		func_135(uParam0, 0, 0);
	}
	if (func_134(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA2CCAAC7F5CA3F49(iParam1))
		{
			iVar0 = unk_0xFAA5505029C4B5A6(iParam1);
			if (!unk_0xC49311A2A500FF09(iVar0, 0))
			{
				if (unk_0x72D30262CF8C8603(iVar0))
				{
					if (!func_132())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x9B9082138A642C14(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xD6ABECE3CBB224B0(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x48A41E0B6D206A79(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iParam1, -1, iVar3, iVar4);
	unk_0x9673FB069F90F6B9("FocusIn", 0, 0);
	unk_0xB84B43B766630B5C("HINT_CAM_SCENE");
	unk_0x9B0169E27978C1A2(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_132()
{
	return func_133(unk_0x1146A9AE09CE2B14());
}

int func_133(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
		{
			return;
		}
	}
	if (unk_0x79CC60D128756F16())
	{
		unk_0xD20D31BC4E3A72D3(iParam2);
		unk_0xBAF2F13FE4D19AA9("FocusIn");
		unk_0xC0BBE340BE2AA02D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9673FB069F90F6B9("FocusOut", 0, 0);
			unk_0x9B0169E27978C1A2(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xD6ABECE3CBB224B0(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4030103C8B148AFC(sVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4030103C8B148AFC(uParam0->f_3))
	{
		if (func_104(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

void func_136(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_112293.f_24993.f_6), iParam0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

bool func_138(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_112283 = 1;
		Global_112280 = unk_0xDFB7BFA6482FEE1E();
		if (func_56(Global_112282))
		{
			func_140(0);
		}
		unk_0xB4D080997F77F539(1, "RE_TITLE");
		if (iParam0 && func_56(Global_112282))
		{
			unk_0xC5CEFC62F3637652();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112293.f_24993.f_2 < 3)
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_137(func_141(iParam0), -1);
					Global_112293.f_24993.f_2++;
					unk_0x191DDA30577F440A(&Global_112289, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x234B68AC2E35ED5A(Global_112289, 1))
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_137(func_141(iParam0), -1);
					Global_112293.f_24993.f_3++;
					unk_0x191DDA30577F440A(&Global_112289, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x234B68AC2E35ED5A(Global_112289, 2))
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_137(func_141(iParam0), -1);
					Global_112293.f_24993.f_4++;
					unk_0x191DDA30577F440A(&Global_112289, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_142()
{
	switch (func_143(&Global_31405, 0, 5, 0, unk_0x62D18D65FE22FF39()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0))
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		unk_0x03903A362E41A74F(unk_0x638BDC79E655C1C2(), 0);
		Global_22531.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4A8177C3950CBBB7(8);
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
		if (!func_145(iParam2))
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
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_42009);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_50)
	{
		case 0:
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
				{
					unk_0xA415F00D0E0DFBCE(iLocal_51[0], 6, 1);
					unk_0xA415F00D0E0DFBCE(iLocal_51[1], 6, 1);
					unk_0xBE91B077ADADE97F(iLocal_51[0], 1);
					unk_0xBE91B077ADADE97F(iLocal_51[1], 1);
					if (unk_0xF41EB7643E61A928(iLocal_51[0], iLocal_54, 0) && unk_0xF41EB7643E61A928(iLocal_51[1], iLocal_54, 0))
					{
						if (iLocal_47 == 2)
						{
							unk_0x5C679902079A7E80(&uVar0);
							unk_0xE946751408DFA71B(0, iLocal_54, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x0509CE092AC81B7C(0, iLocal_54, 10f, 786603);
							unk_0x1BBD0A5729AB1226(uVar0);
							unk_0x8A1AC8EBC73850C8(iLocal_51[0], uVar0);
							unk_0x8D5B447F21217223(&uVar0);
							iLocal_50++;
						}
						else if (iLocal_47 == 4)
						{
							unk_0x5C679902079A7E80(&uVar1);
							unk_0xE946751408DFA71B(0, iLocal_54, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x0509CE092AC81B7C(0, iLocal_54, 10f, 786603);
							unk_0x1BBD0A5729AB1226(uVar1);
							unk_0x8A1AC8EBC73850C8(iLocal_51[0], uVar1);
							unk_0x8D5B447F21217223(&uVar1);
							iLocal_50++;
						}
						else if (iLocal_47 == 7)
						{
							unk_0x5C679902079A7E80(&uVar2);
							unk_0xE946751408DFA71B(0, iLocal_54, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x0509CE092AC81B7C(0, iLocal_54, 10f, 786603);
							unk_0x1BBD0A5729AB1226(uVar2);
							unk_0x8A1AC8EBC73850C8(iLocal_51[0], uVar2);
							unk_0x8D5B447F21217223(&uVar2);
							iLocal_50++;
						}
						else
						{
							unk_0x0509CE092AC81B7C(iLocal_51[0], iLocal_54, 10f, 786603);
							iLocal_50++;
						}
					}
					else
					{
						if (!unk_0xF41EB7643E61A928(iLocal_51[0], iLocal_54, 0) && unk_0x4E8DA737B686529A(iLocal_51[0], -1794415470) != 1)
						{
							unk_0x95CA4545D0C61309(iLocal_51[0], iLocal_54, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xF41EB7643E61A928(iLocal_51[1], iLocal_54, 0) && unk_0x4E8DA737B686529A(iLocal_51[1], -1794415470) != 1)
						{
							unk_0x95CA4545D0C61309(iLocal_51[1], iLocal_54, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_140, cLocal_139, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_51)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar3]) && !unk_0xE50EB54E0F21BED0(iLocal_51[iVar3], 0))
					{
						if (unk_0x36A89B5D559CD938(unk_0x7D2B9E6A64637269()) && unk_0xECA23EB9C2A5E83F(iLocal_51[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 1))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_48 == 4)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0xB3013B466DEA6673("PLAYER HAS PROJECTILE WEAPON", unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 0, 0, 255, 255);
				if ((unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_54, 0f, -3.44f, -3f), unk_0x9E695CE384C77EF0(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0)) && SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) < 225f)
				{
					func_68(6);
				}
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_54, 0f, -3.44f, -3f), unk_0x9E695CE384C77EF0(iLocal_54, 0f, -13.44f, 3f), 2.3f, 0, 1, 0))
				{
					unk_0x8AE96123FEE66A18("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_54, 1)) < 225f)
				{
					unk_0x8AE96123FEE66A18("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
				{
				}
			}
		}
		if (((unk_0xBFCE58B2B3249999(iLocal_54, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_54, 1), 25f, 0)) || (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_51[0], 1), 20f, 0))) || (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_51[1], 1), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_48 != 4)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
			{
				unk_0xA415F00D0E0DFBCE(iLocal_51[0], 6, 0);
				unk_0xBE91B077ADADE97F(iLocal_51[0], 0);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
			{
				unk_0xA415F00D0E0DFBCE(iLocal_51[1], 6, 0);
				unk_0xBE91B077ADADE97F(iLocal_51[1], 0);
			}
		}
	}
}

int func_149()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((unk_0xBFCE58B2B3249999(iLocal_54, 0) && unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14())) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) - unk_0xD6E677FAD7521410(iLocal_54, 1) };
		Var3 = { unk_0x557C9CA8FCC667DF(iLocal_54) };
		Var6 = { unk_0x8EB57098C563AB39(iLocal_54, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) };
		if (((Var6.f_1 > 1f && (((unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_54) || unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_54)) || unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_51[0])) || unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_51[1]))) && unk_0x0BCA9ADE67DF9DD8(unk_0x6EE46314283D3C7D(Var3.x, Var3.f_1, Var0.x, Var0.f_1)) < 60f) && unk_0x6EE46314283D3C7D(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if ((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_54, 2.7f, 7f, -2f), unk_0x9E695CE384C77EF0(iLocal_54, 2.7f, -3.25f, 3f), 3f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_54, -2.7f, 7f, -2f), unk_0x9E695CE384C77EF0(iLocal_54, -2.7f, -3.25f, 3f), 3f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_54, 0f, 7f, -2f), unk_0x9E695CE384C77EF0(iLocal_54, 0f, 0f, 3f), 2.4f, 0, 1, 0))
		{
			if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
			{
				iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (unk_0x419E13582192CFEA(unk_0x0BF0F8F3AD0993F6()))
		{
			iVar0 = unk_0x0BF0F8F3AD0993F6();
		}
		if (unk_0x419E13582192CFEA(iVar0) && unk_0x419E13582192CFEA(iLocal_54))
		{
			return ((unk_0xBFCE58B2B3249999(iVar0, 0) && unk_0x83B12E293561B796(iVar0, iLocal_54)) && unk_0x4DDAC4C80BACF92C(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (iLocal_116)
		{
			return 1;
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) || unk_0xE50EB54E0F21BED0(iLocal_51[0], 0))
		{
			if (unk_0xA6E8FBD68548675F(iLocal_51[0], unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) || unk_0xE50EB54E0F21BED0(iLocal_51[1], 0))
		{
			if (unk_0xA6E8FBD68548675F(iLocal_51[1], unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()
{
	float fVar0;
	
	if ((!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && !unk_0xECEC7528A52B4EE8(iLocal_51[1])) && unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		switch (iLocal_50)
		{
			case 0:
				Local_485 = { unk_0xE8E46B75F88C4ACC(iLocal_54, 0) };
				Local_488 = { unk_0x4BB6BF4A85268A22(iLocal_54, 2) };
				Local_491 = { unk_0xBF480D363C51CDF8("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				bLocal_496 = false;
				iLocal_497 = 0;
				unk_0x47D0DDD8833C5E5F(iLocal_54, 1084227584);
				unk_0x5C679902079A7E80(&uLocal_58);
				unk_0x373635EFD76DFAB3(0, 5000);
				unk_0x45B1B4E55BF15523(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
				unk_0x12D312F073772E84(0, Local_488.f_2, 0);
				unk_0x1BBD0A5729AB1226(uLocal_58);
				unk_0x8A1AC8EBC73850C8(iLocal_51[1], uLocal_58);
				unk_0x8D5B447F21217223(&uLocal_58);
				iLocal_50++;
				break;
			
			case 1:
				Local_485 = { unk_0xE8E46B75F88C4ACC(iLocal_54, 0) };
				Local_488 = { unk_0x4BB6BF4A85268A22(iLocal_54, 2) };
				Local_491 = { unk_0xBF480D363C51CDF8("random@security_van", "sec_case_into_van_calm", Local_485, Local_488, 0, 2) };
				if (!unk_0xEEC203A73BC92E7E(iLocal_495))
				{
					if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_77) < 22500f && unk_0x1CAD2A287D454E0C(iLocal_54))
					{
						iLocal_495 = unk_0xD955F1CC0BCABC78(Local_485, Local_488, 2);
						unk_0xAD844C8843FC405C(iLocal_51[0], iLocal_495, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xB9314D20143CEED3(iLocal_495, 1);
					}
				}
				if (unk_0x4E8DA737B686529A(iLocal_51[1], 242628503) != 1)
				{
					unk_0x5C679902079A7E80(&uLocal_58);
					unk_0x45B1B4E55BF15523(0, Local_491, 1f, -1, 0.1f, 512, Local_488.f_2);
					unk_0x12D312F073772E84(0, Local_488.f_2, 0);
					unk_0x1BBD0A5729AB1226(uLocal_58);
					unk_0x8A1AC8EBC73850C8(iLocal_51[1], uLocal_58);
					unk_0x8D5B447F21217223(&uLocal_58);
				}
				fVar0 = unk_0xA8D713A937F31250(iLocal_51[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_488.f_2 > 180f)
				{
					Local_488.f_2 = (Local_488.f_2 - 360f);
				}
				if (Local_488.f_2 <= -180f)
				{
					Local_488.f_2 = (Local_488.f_2 + 360f);
				}
				if (unk_0x0BCA9ADE67DF9DD8((fVar0 - Local_488.f_2)) < 15f && SYSTEM::VDIST(Local_491, unk_0xD6E677FAD7521410(iLocal_51[1], 1)) < 0.2f)
				{
					unk_0x34C71C0D521039D0(iLocal_51[1], -1056964608);
					unk_0xCA089CD1A17D76DF(iLocal_51[1]);
					bLocal_496 = true;
					iLocal_494 = unk_0xD955F1CC0BCABC78(Local_485, Local_488, 2);
					unk_0xAD844C8843FC405C(iLocal_51[1], iLocal_494, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xED3365BAA5895E01(iLocal_54, iLocal_494, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_50++;
				}
				break;
			
			case 2:
				if (!iLocal_106)
				{
					if (((unk_0xEEC203A73BC92E7E(iLocal_494) && unk_0x0BC8768247440B3A(iLocal_494) > 0.09f) && unk_0x0BC8768247440B3A(iLocal_494) < 0.11f) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_140, cLocal_139, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_106 = 1;
							}
						}
					}
				}
				if (unk_0xEEC203A73BC92E7E(iLocal_494))
				{
					if (!bLocal_109)
					{
						if ((unk_0x419E13582192CFEA(iLocal_56) && unk_0xDA872572A987B2AD(iLocal_56, iLocal_51[1])) && unk_0x0BC8768247440B3A(iLocal_494) > 0.3793f)
						{
							if (!unk_0xDA872572A987B2AD(iLocal_56, iLocal_54))
							{
								unk_0x3211C35423263392(iLocal_56, 1, 1);
								unk_0x3CBE9F07524C242D(iLocal_56, 0, 0);
								unk_0x0F1058706D5A58B4(iLocal_56, iLocal_54, 0, unk_0x8EB57098C563AB39(iLocal_54, unk_0xD6E677FAD7521410(iLocal_56, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_109 = true;
						}
					}
					else if (unk_0x0BC8768247440B3A(iLocal_494) > 0.546243f)
					{
						unk_0x90ED32458AC2D129(iLocal_54, -4f, 1);
						if (unk_0x419E13582192CFEA(iLocal_56))
						{
							iLocal_106 = 0;
							unk_0x616B09EEEFED8FAF(iLocal_54, 2, 1);
							unk_0x616B09EEEFED8FAF(iLocal_54, 3, 1);
							iLocal_50++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_106)
				{
					if (((unk_0xEEC203A73BC92E7E(iLocal_494) && unk_0x0BC8768247440B3A(iLocal_494) > 0.56f) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_51[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_140, cLocal_139, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_106 = 1;
						}
					}
				}
				if (!iLocal_497)
				{
					if ((unk_0xEEC203A73BC92E7E(iLocal_494) && unk_0x0BC8768247440B3A(iLocal_494) > 0.6f) || !unk_0xEEC203A73BC92E7E(iLocal_494))
					{
						if (unk_0xEEC203A73BC92E7E(iLocal_495))
						{
							unk_0xCA089CD1A17D76DF(iLocal_51[0]);
							iLocal_495 = unk_0xD955F1CC0BCABC78(Local_485, Local_488, 2);
							unk_0xAD844C8843FC405C(iLocal_51[0], iLocal_495, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_497 = 1;
					}
				}
				else if ((unk_0xEEC203A73BC92E7E(iLocal_495) && unk_0x0BC8768247440B3A(iLocal_495) >= 0.92f) || !unk_0xEEC203A73BC92E7E(iLocal_495))
				{
					if (!unk_0xF41EB7643E61A928(iLocal_51[0], iLocal_54, 0) && unk_0x4E8DA737B686529A(iLocal_51[0], -1794415470) != 1)
					{
						unk_0xCA089CD1A17D76DF(iLocal_51[0]);
						unk_0x95CA4545D0C61309(iLocal_51[0], iLocal_54, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xEEC203A73BC92E7E(iLocal_494) && unk_0x0E497F28E1A4E3F6(iLocal_51[1], unk_0x15173FB88ABC94F9("ENDS_IN_WALK")))
				{
					unk_0xCA089CD1A17D76DF(iLocal_51[1]);
					unk_0x95CA4545D0C61309(iLocal_51[1], iLocal_54, -1, 0, 1f, 1, 0);
					SYSTEM::SETTIMERA(0);
				}
				if ((func_88() && unk_0x7FA7EB6FAB2D276F(iLocal_54, 0) == 0f) && unk_0x7FA7EB6FAB2D276F(iLocal_54, 1) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 15000)
				{
					unk_0x616B09EEEFED8FAF(iLocal_54, 0, 1);
					unk_0x616B09EEEFED8FAF(iLocal_54, 1, 1);
				}
				break;
		}
		if (((!unk_0xECEC7528A52B4EE8(func_3()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(func_3(), 1)) < 30f) && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) != 0)
		{
			func_68(8);
		}
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
	{
		if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
		{
			func_68(7);
		}
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_48 != 1)
	{
		if (iLocal_48 != 4)
		{
			func_97();
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
			{
				if (unk_0x698F51FB33ADAF7B(iLocal_51[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_47 != 2)
					{
						unk_0x9E9699379D42C23B(iLocal_51[0], "random@security_van", "driver_exit_panic", Local_485, Local_488, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0xCA089CD1A17D76DF(iLocal_51[0]);
						unk_0x4261814A9A26E86F(iLocal_51[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xBFCE58B2B3249999(iLocal_54, 0) && unk_0xEEC203A73BC92E7E(iLocal_494)) && !unk_0xECEC7528A52B4EE8(iLocal_51[1]))
			{
				unk_0x90ED32458AC2D129(iLocal_54, -1000f, 1);
				unk_0xCA089CD1A17D76DF(iLocal_51[1]);
			}
		}
		if (bLocal_109 && !unk_0xC2EBFA0B77E6B2D4(uLocal_137))
		{
			unk_0x616B09EEEFED8FAF(iLocal_54, 2, 1);
			unk_0x616B09EEEFED8FAF(iLocal_54, 3, 1);
		}
	}
}

int func_154()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x0BF0F8F3AD0993F6(), 0))
			{
				if (func_80(unk_0x0BF0F8F3AD0993F6()))
				{
					iLocal_55 = unk_0x0BF0F8F3AD0993F6();
					return 1;
				}
			}
		}
		else if (!unk_0xE50EB54E0F21BED0(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
		{
			if (func_80(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
			{
				fLocal_480 = (fLocal_480 + unk_0x7FF6ACE380ED166C());
			}
			else if (fLocal_480 > 0f)
			{
				fLocal_480 = (fLocal_480 - (unk_0x7FF6ACE380ED166C() * 10f));
			}
			else if (fLocal_480 < 0f)
			{
				fLocal_480 = 0f;
			}
			if (fLocal_480 > 3f)
			{
				iLocal_55 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]) && unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14())) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && (unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_51[iVar0]) || unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))) && SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_51[iVar0], 1)) < 9f) && !unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 7)) && func_72())
		{
			return 1;
		}
		if (unk_0x6B9E71121F5B8154(iLocal_51[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xF41EB7643E61A928(iLocal_51[0], iLocal_54, 0) || !unk_0xF41EB7643E61A928(iLocal_51[1], iLocal_54, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1);
		if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269())))
		{
			if (unk_0xBBC3519C07015926(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[0]))
				{
					if (unk_0xD406352E21A7E1D0(iLocal_51[0], unk_0x7D2B9E6A64637269(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_51[1]))
				{
					if (unk_0xD406352E21A7E1D0(iLocal_51[1], unk_0x7D2B9E6A64637269(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if ((((((!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]) && unk_0xA6E8FBD68548675F(iLocal_51[iVar0], unk_0x7D2B9E6A64637269(), 1)) || (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]) && unk_0x3D28F4F0775C6C2A(iLocal_51[iVar0], unk_0x7D2B9E6A64637269()))) || unk_0xA6E8FBD68548675F(iLocal_51[iVar0], unk_0x7D2B9E6A64637269(), 1)) || (unk_0xA6E8FBD68548675F(iLocal_54, unk_0x7D2B9E6A64637269(), 1) && func_72())) || unk_0xECEC7528A52B4EE8(iLocal_51[iVar0])) || unk_0xE50EB54E0F21BED0(iLocal_51[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (unk_0xBFCE58B2B3249999(iLocal_54, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]))
			{
				if (unk_0x36A89B5D559CD938(unk_0x7D2B9E6A64637269()) && unk_0xECA23EB9C2A5E83F(iLocal_51[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_54, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()) || unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_77, 25f, 25f, 20f, 0, 1, 0))
		{
			return 1;
		}
	}
	if (((unk_0xBFCE58B2B3249999(iLocal_54, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_54, 1), 25f, 0)) || (!unk_0xECEC7528A52B4EE8(iLocal_51[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_51[0], 1), 20f, 0))) || (!unk_0xECEC7528A52B4EE8(iLocal_51[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0xD6E677FAD7521410(iLocal_51[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (unk_0x419E13582192CFEA(iLocal_51[iVar0]))
		{
			if ((!unk_0xECEC7528A52B4EE8(iLocal_51[iVar0]) && !unk_0xE50EB54E0F21BED0(iLocal_51[iVar0], 0)) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if ((unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iLocal_51[iVar0], 1), 5f, 1) || func_37(unk_0xD6E677FAD7521410(iLocal_51[iVar0], 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_51[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xA6E8FBD68548675F(iLocal_51[iVar0], unk_0x7D2B9E6A64637269(), 1))
				{
					bLocal_110 = true;
					return 1;
				}
			}
			else
			{
				bLocal_110 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	iLocal_54 = unk_0x170478CC84C8AE2F(iLocal_104, Local_77, fLocal_80, 1, 1, 0);
	iLocal_57 = unk_0x795434E153F90E41(joaat("prop_security_case_01"), Local_77, 1, 1, 0);
	unk_0x0F1058706D5A58B4(iLocal_57, iLocal_54, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x4603196EEEA2355C(iLocal_57, 0, 0);
	unk_0x18AAD19264567F63(iLocal_57, iLocal_54, 0);
	unk_0x47D0DDD8833C5E5F(iLocal_54, 1084227584);
	unk_0x5C052A30B9FCA449(iLocal_54, 3);
	unk_0x3A653D4F5FA4B665(iLocal_57, 0, 1, 1, 1, 1, 1, 0, 0);
	unk_0xEA44C65D5434D223(iLocal_54, 1, 0);
	unk_0xC595907BB71C921D(iLocal_54, 700, 0);
	unk_0x410F7E904016F85F(iLocal_54, 0, 0);
	unk_0x46EDFC827DC67D89(iLocal_54, 1, 1);
	unk_0x16EB34BCB8FF7F0D(iLocal_54, 0);
	unk_0x3A3D993E6038D003(iLocal_54, 1);
	unk_0xABAA7F8FD10DCDF2((Local_77.x - 200f), (Local_77.f_1 - 200f), (Local_77.x + 200f), (Local_77.f_1 + 200f));
	if (iLocal_46 == 3)
	{
		iLocal_51[0] = unk_0x42F3C85A00B4FC7B(iLocal_54, 26, iLocal_103, -1, 1, 1);
		iLocal_51[1] = unk_0x42F3C85A00B4FC7B(iLocal_54, 26, iLocal_103, 0, 1, 1);
		unk_0x89E171705EA920DA(iLocal_54, 1, 1, 0);
		unk_0x46EDFC827DC67D89(iLocal_54, 1, 1);
	}
	else
	{
		iLocal_51[1] = unk_0x0FDCFECB2EF2BC1C(26, iLocal_103, Local_67[1 /*3*/], fLocal_74[1], 1, 1);
		iLocal_51[0] = unk_0x0FDCFECB2EF2BC1C(26, iLocal_103, Local_67[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0x8ADA462BC5F42FD8(iLocal_51[1], iLocal_51[0], -1, 0, 2);
	}
	func_85(iLocal_51[1]);
	unk_0xF479CA7199C54C8F("Security_guards", &iLocal_66);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		unk_0xEC7D41CF790FC6FB(iLocal_51[iVar0], 0);
		unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 1, 0);
		unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 13, 0);
		unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 6, 1);
		unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 8, 0);
		unk_0xA415F00D0E0DFBCE(iLocal_51[iVar0], 10, 1);
		unk_0x82D2BB48A39F1E88(iLocal_51[iVar0], 512, 1);
		unk_0x7B28A83A0D3DD0F9(iLocal_51[iVar0], 118, 0);
		unk_0x82D2BB48A39F1E88(iLocal_51[iVar0], 128, 1);
		unk_0x1EB6C2E7D90CD82E(iLocal_51[iVar0], 0);
		unk_0xEA44C65D5434D223(iLocal_51[iVar0], 1, 0);
		unk_0x2EB33FFA32BC9E49(iLocal_51[iVar0], 1);
		unk_0xC11F9242D7BDABF9(iLocal_51[iVar0], 1);
		unk_0xD82D50E4AC0D46B9(iLocal_51[iVar0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0x2271ED1E65FB75EE(iLocal_51[iVar0], iLocal_66);
		unk_0x504B26425DFF773C(iLocal_51[iVar0], 1);
		unk_0x83E421E5A4A2A512(iLocal_51[iVar0], 250);
		iVar0++;
	}
	unk_0x46EDFC827DC67D89(iLocal_51[1], 1, 1);
	unk_0x78B2DF314748056B(1, joaat("COP"), iLocal_66);
	unk_0x78B2DF314748056B(1, iLocal_66, joaat("COP"));
	unk_0x78B2DF314748056B(2, iLocal_66, 1862763509);
	unk_0x78B2DF314748056B(2, 1862763509, iLocal_66);
	if (iLocal_46 == 1)
	{
		unk_0xC8749D706BBF16E1(iLocal_51[0], 0, 1, 0, 0);
		unk_0x30B0040AB4AF815E(iLocal_51[0], 0);
		unk_0xC8749D706BBF16E1(iLocal_51[1], 0, 1, 0, 0);
		unk_0x30B0040AB4AF815E(iLocal_51[1], 0);
	}
	if (func_16() == 0 && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		func_74(&Local_140, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		func_74(&Local_140, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		func_74(&Local_140, 2, unk_0x7D2B9E6A64637269(), "TREVOR", 0, 1);
	}
	func_74(&Local_140, 3, iLocal_51[0], "SECVANGUY1", 0, 1);
	func_74(&Local_140, 4, iLocal_51[1], "SECVANGUY2", 0, 1);
	unk_0x16C6E55F8C91ED24(iLocal_104, 1);
	unk_0xE58535D63CA64820(iLocal_103, 1);
	if (iLocal_46 != 3)
	{
	}
}

float func_160(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam4);
}

bool func_161()
{
	func_169(&uLocal_317, iLocal_103);
	func_169(&uLocal_317, iLocal_104);
	func_169(&uLocal_317, iLocal_105);
	func_167(&uLocal_317, "random@security_van");
	func_167(&uLocal_317, "weapons@holster_1h");
	func_167(&uLocal_317, "move_injured_generic");
	func_166(&uLocal_317, 3);
	return func_162(&uLocal_317);
}

int func_162(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x234B68AC2E35ED5A(iParam0, 30))
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, 29))
		{
			switch (func_165(iParam0))
			{
				case 0:
					return unk_0xA9C0BBFB9CBB66F1(uParam2);
					break;
				
				case 1:
					return unk_0x0EC2B29D4172D225(uParam1);
					break;
				
				case 2:
					return unk_0x472AC3055A188881(uParam1);
					break;
				
				case 3:
					return unk_0xAD9D75DD073BF477(sParam1);
					break;
				
				case 4:
					return unk_0x9CF7186A344D26A9(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x9745FAC5B3E4C8B8(sParam1);
					break;
				
				case 6:
					return unk_0x952AB441FA24BF16(sParam1, unk_0x234B68AC2E35ED5A(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xD3419C924F3692F7(uParam2);
					break;
				
				case 8:
					return unk_0x080D38ACEC5DC1A2(uParam2);
					break;
				
				case 9:
					return unk_0xB4C12EFC62A8536A();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xDA654EB115F9FF7D(sParam3, "NULL"))
					{
						if (unk_0xDA654EB115F9FF7D(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x191DDA30577F440A(uParam0[iVar0 /*18*/], iParam1);
			unk_0x191DDA30577F440A(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (func_18(func_16()))
		{
			iVar36 = func_61();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar32 /*6*/], 2) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar32 /*6*/], 3))
				{
					func_172(iVar32, &Var0);
					fVar35 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
	if (unk_0xAB6A270F84A8781E(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_112011 > 0;
}

int func_179()
{
	if (Global_96292 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
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

int func_182()
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (SYSTEM::VMAG2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((Global_112282 == func_65() && unk_0x5E9AD12CB585F23D()) && Global_112283)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x2053F6ACFD4ED4BC() >= (uParam0->f_146 + uParam0->f_147) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2)) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
					{
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x2053F6ACFD4ED4BC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(var uParam0)
{
	func_186(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_186(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 30))
	{
		switch (func_165(*uParam0))
		{
			case 0:
				unk_0x16E516CA9C88FF48(uParam2);
				break;
			
			case 1:
				unk_0x068BDE31F7D112BB(uParam1);
				break;
			
			case 2:
				unk_0x5590FBCD51709DFE(uParam1);
				break;
			
			case 3:
				unk_0xA08F3C300F9E3468(uParam1, unk_0x234B68AC2E35ED5A(*uParam0, 28));
				break;
			
			case 4:
				unk_0x498685EB9132AF88(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x1594E542FF3D23EF(uParam1);
				break;
			
			case 6:
				unk_0x952AB441FA24BF16(uParam1, unk_0x234B68AC2E35ED5A(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x5B99C7B716657782(uParam2);
				break;
			
			case 8:
				unk_0xBB3CDAB62C8773C8(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x7C0019321F1FC821();
				break;
			
			default:
				break;
		}
		unk_0x191DDA30577F440A(uParam0, 29);
	}
}

void func_187()
{
	iLocal_105 = joaat("prop_security_case_01");
	iLocal_104 = joaat("stockade");
	iLocal_103 = joaat("s_m_m_armoured_01");
	uLocal_128 = unk_0xB36B8558948EA7A8(3000, 8000);
	switch (iLocal_47)
	{
		case 1:
			Local_96 = { -315.889f, -1550.554f, 7.233013f };
			Local_99 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_102 = 180f;
			Local_77 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_80 = -64.3539f;
			Local_67[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_74[0] = 158.3857f;
			Local_67[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_74[1] = 290.3041f;
			iLocal_46 = 1;
			break;
		
		case 2:
			Local_96 = { -538.2149f, -868.7426f, 17.96054f };
			Local_99 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_102 = 121.5f;
			Local_77 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_80 = -89.02679f;
			Local_67[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_74[0] = 12.5464f;
			Local_67[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_74[1] = 352.4951f;
			iLocal_46 = 1;
			break;
		
		case 3:
			Local_96 = { -468.6309f, 6101.907f, 14.8912f };
			Local_99 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_102 = 152.25f;
			Local_77 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_80 = 188.9862f;
			Local_67[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_74[0] = 251.7138f;
			Local_67[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_74[1] = 154.0836f;
			iLocal_46 = 2;
			break;
		
		case 4:
			Local_96 = { -631.3408f, -1105.581f, 7.220509f };
			Local_99 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_102 = 177.25f;
			Local_77 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_80 = 263.4662f;
			Local_67[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_74[0] = 338.8304f;
			Local_67[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_74[1] = 151.297f;
			iLocal_46 = 1;
			break;
		
		case 5:
			Local_77 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_80 = 26.9919f;
			iLocal_46 = 3;
			break;
		
		case 6:
			Local_77 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_80 = 271.1543f;
			iLocal_46 = 3;
			break;
		
		case 7:
			Local_77 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_80 = 335.9052f;
			iLocal_46 = 3;
			break;
		
		case 8:
			Local_77 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_80 = 119.1519f;
			iLocal_46 = 3;
			break;
		
		case 9:
			Local_77 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_80 = 83.1204f;
			iLocal_46 = 3;
			break;
		
		case 10:
			Local_77 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_80 = 248.8625f;
			iLocal_46 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0xA87835FA95542DD6(0);
	unk_0xD72603E43F4527D1(1);
	Global_112279 = 0;
	func_189();
}

void func_189()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x16C6E55F8C91ED24(unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)), 1);
		}
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 0);
	}
}

void func_190(int iParam0)
{
	Global_112282 = iParam0;
}

int func_191(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_150875)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_65();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			if (SYSTEM::VMAG2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_112293.f_9083)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_112282 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_228(iParam3))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_112293.f_24993.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xDFB7BFA6482FEE1E() - Global_112284) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_224())
		{
			return 0;
		}
		if (unk_0x16371AB7527A7757())
		{
			return 0;
		}
		if (unk_0x5E9AD12CB585F23D())
		{
			return 0;
		}
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xE75EE67F14EAAE37(unk_0xB71084333B418824(unk_0x7D2B9E6A64637269())))
		{
			if ((unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(377.153f, -717.567f, 10.0536f) || unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(320.9934f, 265.2515f, 82.1221f)) || unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_31492)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_112293.f_2361.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_112293.f_2361.f_539.f_2296[iVar4];
				if (func_214(iVar8))
				{
					if (func_192(iVar4))
					{
						if (!func_134(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var5) < (210f * 210f))
							{
								if (func_16() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112293.f_2361.f_539.f_2296[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_197(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_202(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_203(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_204(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 15;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	var uVar0;
	
	func_213(&uVar0, unk_0x1947D86A2BB06F8D());
	func_212(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_211(&uVar0, unk_0xCA86FAB7FADC8353());
	func_210(&uVar0, unk_0x9E6858A319A1F6F2());
	func_209(&uVar0, unk_0xA91C851005050418());
	func_208(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
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

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_1()) || Global_111340) || Global_31348) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1) || func_1()) || Global_31348) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_1()) || Global_111340) || Global_31348) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_112293.f_7686.f_919[iVar0] == 5) || Global_42556 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_1()) || Global_111340) || Global_31348) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_1()) || Global_31348) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_112293.f_7686.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || func_1()) || func_221()) || Global_111340) || Global_31348) || func_223()) || Global_43182) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0)) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1)) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_1()) || Global_111340) || Global_31348) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_99409.f_1;
}

int func_218()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
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

bool func_221()
{
	return Global_99422.f_364 > 0;
}

bool func_222()
{
	return Global_99422.f_363 > 0;
}

var func_223()
{
	return Global_1312902;
}

int func_224()
{
	func_15();
	if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_112293.f_7686.f_919[iParam0];
}

bool func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x234B68AC2E35ED5A(Global_112293.f_24993, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_1, iVar0);
	}
	return bVar1;
}

int func_229()
{
	var uVar0;
	
	if (Global_31496)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0xBFCE58B2B3249999(uVar0, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x27FC1B0077581B37(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
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
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_231()
{
	if (func_183())
	{
		if (unk_0xC2EBFA0B77E6B2D4(uLocal_137))
		{
			if (unk_0x575B7C28D81C0B4D(uLocal_64))
			{
				unk_0x1AD5BCFEC31BB8D9(&uLocal_64);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_57))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_57);
		}
		if (unk_0x419E13582192CFEA(iLocal_56))
		{
			if (unk_0x98E18969B1D0C4AB(iLocal_56))
			{
				unk_0x04F4D55F2C0C756D(&iLocal_56);
			}
			else
			{
				unk_0x39E572BDDBA714A2(&iLocal_56);
			}
		}
		unk_0x824F744352C8BC82(iLocal_104);
		unk_0x824F744352C8BC82(iLocal_103);
		unk_0x824F744352C8BC82(iLocal_105);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0xE58535D63CA64820(iLocal_103, 0);
		unk_0x16C6E55F8C91ED24(iLocal_104, 0);
	}
	if (iLocal_131 != 0)
	{
		unk_0x3E5BA73CEA34D768(iLocal_131);
	}
	unk_0xE6B53A6E51AAA49F(uLocal_65, 0);
	func_135(&uLocal_305, 0, 0);
	func_237(-1);
	func_232(&uLocal_317, 0);
	unk_0x4BFE89D21F9885DC();
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				unk_0x824F744352C8BC82(uParam2);
				break;
			
			case 1:
				unk_0xF9135F131C423364(uParam1);
				break;
			
			case 2:
				unk_0x88718F88EB6B8FD5(uParam1);
				break;
			
			case 3:
				unk_0xB5F867E143F78583(uParam1);
				break;
			
			case 4:
				unk_0x7B6B41ECBE4B733F(iParam2, uParam1);
				break;
			
			case 5:
				unk_0xD0AC51DF5D1C2659(uParam1);
				break;
			
			case 6:
				unk_0xE76ABB7DC1AD1626();
				break;
			
			case 7:
				unk_0x41BE3F722FC386CD(iParam2);
				break;
			
			case 8:
				unk_0xE498E37B41AEA1DF(iParam2, unk_0x234B68AC2E35ED5A(iParam0, 26));
				break;
			
			case 9:
				unk_0x4D2B6680250EFCC8();
				break;
			
			default:
				break;
		}
	}
}

void func_237(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0xB4D080997F77F539(0, 0);
		Global_112284 = unk_0xDFB7BFA6482FEE1E();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_112282, 1), 64);
		if (func_64(Global_112282) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112281, 64);
		}
		unk_0x551AA2E1D1F02037(&cVar0, Global_112279, (unk_0xDFB7BFA6482FEE1E() - Global_112280), 0);
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112289, 0) && Global_112293.f_24993.f_2 < 3)
	{
		unk_0xC664C0067EEAB8D1(&Global_112289, 0);
	}
	func_238(&Global_31405);
	Global_112283 = 0;
	func_190(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_240(int iParam0)
{
	Global_42560 = (unk_0xDFB7BFA6482FEE1E() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_112293.f_24993.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_248(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		if (unk_0x9B73EB6255D4AE81(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x9B73EB6255D4AE81(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

