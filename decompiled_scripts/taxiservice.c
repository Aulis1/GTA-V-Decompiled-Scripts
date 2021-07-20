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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 12;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
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
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
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
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 1065353216;
	var uLocal_815 = 0;
	struct<9> Local_816 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	struct<3> Local_829[40];
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	char cLocal_954[32] = "";
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	struct<3> Local_962 = { 0, 0, 0 } ;
	struct<3> Local_965 = { 0, 0, 0 } ;
	struct<3> Local_968 = { 0, 0, 0 } ;
	struct<3> Local_971 = { 0, 0, 0 } ;
	struct<3> Local_974 = { 0, 0, 0 } ;
	struct<3> Local_977 = { 0, 0, 0 } ;
	struct<3> Local_980 = { 0, 0, 0 } ;
	struct<3> Local_983 = { 0, 0, 0 } ;
	struct<3> Local_986 = { 0, 0, 0 } ;
	struct<3> Local_989 = { 0, 0, 0 } ;
	int iLocal_992 = 0;
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
	iLocal_46 = unk_0xB967AFE724ADAEB1();
	iLocal_47 = unk_0x7EA43B6762051EA2();
	iLocal_71 = 1076369579;
	iLocal_72 = 1076631591;
	fLocal_75 = 0.22f;
	fLocal_76 = 50f;
	fLocal_77 = -4f;
	fLocal_78 = 4f;
	fLocal_79 = -89f;
	fLocal_80 = 89f;
	fLocal_81 = 4f;
	fLocal_84 = 0f;
	fLocal_86 = 0.4f;
	fLocal_87 = 0.6f;
	fLocal_88 = 0.201f;
	fLocal_89 = 0.351f;
	iLocal_92 = -1;
	iLocal_107 = -1;
	iLocal_108 = -1;
	sLocal_109 = unk_0x908D1ACF42DAF9B8(2, 195, 1);
	iLocal_110 = joaat("prop_taxi_meter_2");
	iLocal_112 = 3;
	iLocal_826 = -1;
	iLocal_827 = 263;
	StringCopy(&cLocal_954, "oddjobs@taxi@driver", 32);
	Local_965 = { 0f, 0f, 0f };
	Local_968 = { 0f, 0f, 0f };
	Local_980 = { 0f, -0.25f, 0.55f };
	Local_983 = { -0.3f, 1f, 0.35f };
	Local_986 = { -0.01f, 0.6f, 0.24f };
	Local_989 = { -5f, 0f, 0f };
	if (unk_0x4210287E2833D44B(66))
	{
		if (unk_0xF7F6A9157CE1B76E() == 64)
		{
			func_239(0);
		}
		else
		{
			func_239(1);
		}
		unk_0x4BFE89D21F9885DC();
	}
	if (!func_232())
	{
		func_239(1);
	}
	while (true)
	{
		if (!func_231())
		{
			func_239(1);
		}
		if (func_230(iLocal_952))
		{
			func_239(1);
		}
		switch (iLocal_952)
		{
			case 1:
				func_65();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (Global_111340)
		{
			Global_111340 = 0;
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
				unk_0x58DF9C9B7E628ADD(unk_0x1146A9AE09CE2B14(), 1);
			}
			unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
			if ((iLocal_951 == 2 || iLocal_951 == 3) || iLocal_951 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_111324) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_111324, 1))
	{
		if (!func_2(unk_0x7D2B9E6A64637269(), -828834893) && !func_2(unk_0x7D2B9E6A64637269(), 451360105))
		{
			unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
		}
	}
	else
	{
		if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
			{
				if (unk_0xF41EB7643E61A928(Global_111325, Global_111324, 0))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						unk_0x5B1F7232B835EC44(Global_111325, Global_111324, unk_0x7D2B9E6A64637269(), 8, 25f, 790564, 300f, 15f, 1);
					}
				}
				else if (!unk_0x11DBA82F76F3C4C2(Global_111325))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						unk_0x1DC2BF231DE6A016(Global_111325, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
					}
				}
				unk_0x504B26425DFF773C(Global_111325, 1);
				unk_0xBE91B077ADADE97F(Global_111325, 0);
			}
		}
		else if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
		{
			if (unk_0xF41EB7643E61A928(Global_111325, Global_111324, 0))
			{
				if (!func_2(Global_111325, -258271821))
				{
					unk_0x0509CE092AC81B7C(Global_111325, Global_111324, 12f, 790699);
				}
			}
			unk_0x504B26425DFF773C(Global_111325, 1);
			unk_0xBE91B077ADADE97F(Global_111325, 0);
		}
		func_239(1);
	}
}

int func_2(int iParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (!unk_0xECEC7528A52B4EE8(iParam0))
			{
				if (unk_0x4E8DA737B686529A(iParam0, iParam1) == 1 || unk_0x4E8DA737B686529A(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
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

int func_4(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_5()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0xA13444986DC34E90(func_6()))
	{
		unk_0xEB394039A41B68FE(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			uVar2 = unk_0x5E3585E4AFD19C6F(func_6(), 0);
			if (!unk_0xECEC7528A52B4EE8(uVar2))
			{
				unk_0xCA089CD1A17D76DF(iVar2);
				if (!unk_0xE50EB54E0F21BED0(Global_111324, 0))
				{
					if (unk_0xF41EB7643E61A928(iVar2, Global_111324, 0))
					{
						unk_0xEDC0317C5B604BB1(iVar2, Global_111324, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x5E3585E4AFD19C6F(func_6(), 1);
				if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					unk_0xCA089CD1A17D76DF(iVar2);
					if (!unk_0xE50EB54E0F21BED0(Global_111324, 0))
					{
						if (unk_0xF41EB7643E61A928(iVar2, Global_111324, 0))
						{
							unk_0xEDC0317C5B604BB1(iVar2, Global_111324, 64);
						}
					}
				}
			}
		}
	}
}

var func_6()
{
	return unk_0xC66769C13C830856(unk_0x638BDC79E655C1C2());
}

void func_7()
{
	bool bVar0;
	
	if (unk_0xBFCE58B2B3249999(Global_111324, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(Global_111325))
		{
			if (unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
			{
				if (!func_63())
				{
					bVar0 = true;
					if (func_56(func_57()) >= iLocal_103)
					{
						if (bLocal_67)
						{
							if (iLocal_103 > 0)
							{
								if (fLocal_74 > 75f)
								{
									iLocal_828 = 6;
								}
								else
								{
									iLocal_828 = 5;
								}
								func_46(Global_111325, &iLocal_828);
								func_9(func_57(), 21, iLocal_103);
								bVar0 = false;
							}
						}
						else if (iLocal_68 || iLocal_951 == 3)
						{
							if (iLocal_103 > 0)
							{
								iLocal_828 = 13;
								func_46(Global_111325, &iLocal_828);
								func_9(func_57(), 21, iLocal_103);
								bVar0 = false;
							}
						}
						else if (unk_0x4DDAC4C80BACF92C(Global_111324) > 5f)
						{
							if (!func_8())
							{
								iLocal_828 = 12;
								func_46(Global_111325, &iLocal_828);
								unk_0x272ACC75FC69F0B5(unk_0x1146A9AE09CE2B14(), 1, 0);
								unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
							}
						}
						else
						{
							iLocal_828 = 13;
							func_46(Global_111325, &iLocal_828);
							if (iLocal_103 > 0)
							{
								func_9(func_57(), 21, iLocal_103);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_103 > 0)
						{
							iLocal_828 = 7;
							func_46(Global_111325, &iLocal_828);
							unk_0x272ACC75FC69F0B5(unk_0x1146A9AE09CE2B14(), 1, 0);
							unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
						}
					}
				}
			}
		}
	}
}

int func_8()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (func_45(iParam0) == 3)
	{
		return 0;
	}
	if (func_45(iParam0) == 4)
	{
		return 0;
	}
	return func_10(func_45(iParam0), 0, iParam1, iParam2, 0);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_44();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_43(99, 1);
					func_42(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_42(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_42(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_26(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_21(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xC34DC2DC2423B647())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_43(95, iParam3);
					break;
				
				case 1:
					func_43(97, iParam3);
					break;
				
				case 2:
					func_43(96, iParam3);
					break;
			}
			func_43(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_13(iVar1);
	}
	iVar5 = (Global_59272[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59272[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59272[iVar2] = 2147483647;
				}
				else
				{
					Global_59272[iVar2] = (Global_59272[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_42(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_42(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_42(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59272[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59272[iVar2];
			Global_59272[iVar2] = (Global_59272[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112293.f_20562.f_233[iVar2 /*69*/]++;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_1++;
		if (Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_12(iParam0);
	if (Global_42009 == 15)
	{
		func_11(0);
	}
	return 1;
}

void func_11(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59280[iVar0 /*3*/][0] = Global_112293.f_20562[iVar0];
		Global_59280.f_31[iVar0 /*3*/][0] = Global_112293.f_20562.f_11[iVar0];
		Global_59280.f_62[iVar0 /*3*/][0] = Global_112293.f_20562.f_22[iVar0];
		Global_59280.f_93[iVar0 /*3*/][0] = Global_112293.f_20562.f_33[iVar0];
		Global_59280.f_124[iVar0 /*3*/][0] = Global_112293.f_20562.f_44[iVar0];
		Global_59280.f_155[iVar0 /*3*/][0] = Global_112293.f_20562.f_55[iVar0];
		Global_59280.f_186[iVar0 /*3*/][0] = Global_112293.f_20562.f_66[iVar0];
		Global_59280.f_217[iVar0 /*3*/][0] = Global_112293.f_20562.f_77[iVar0];
		Global_59280.f_248[iVar0 /*3*/][0] = Global_112293.f_20562.f_88[iVar0];
		if (!bParam0)
		{
			Global_59280[iVar0 /*3*/][1] = Global_112293.f_20562[iVar0];
			Global_59280.f_31[iVar0 /*3*/][1] = Global_112293.f_20562.f_11[iVar0];
			Global_59280.f_62[iVar0 /*3*/][1] = Global_112293.f_20562.f_22[iVar0];
			Global_59280.f_93[iVar0 /*3*/][1] = Global_112293.f_20562.f_33[iVar0];
			Global_59280.f_124[iVar0 /*3*/][1] = Global_112293.f_20562.f_44[iVar0];
			Global_59280.f_155[iVar0 /*3*/][1] = Global_112293.f_20562.f_55[iVar0];
			Global_59280.f_186[iVar0 /*3*/][1] = Global_112293.f_20562.f_66[iVar0];
			Global_59280.f_217[iVar0 /*3*/][1] = Global_112293.f_20562.f_77[iVar0];
			Global_59280.f_248[iVar0 /*3*/][1] = Global_112293.f_20562.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_13(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_19(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_19(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_19(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_19(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_16(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_16(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_16(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_16(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_16(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_16(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_15() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_15() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_14(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_17(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1312763;
}

int func_19(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_20(int iParam0)
{
	func_43(93, iParam0);
	func_43(29, iParam0);
	func_43(30, iParam0);
}

bool func_21(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_23(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_23(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_23(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_23(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_22(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_22(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_22(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_22(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_22(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_22(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0);
	}
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_15() /*5557*/].f_675.f_10, iParam0);
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_17(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)
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
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
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
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_26(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x4999364EFF3B7CFC(27))
	{
		return 0;
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD885BEFA31A18D47(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xAC4FD27671081628(joaat("num_cash_spent"), iVar1, 1);
		func_41(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_27(27, 1);
	return 1;
}

int func_27(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_28(iParam0, iParam1);
}

int func_28(int iParam0, int iParam1)
{
	if (func_40(14) && !func_39(iParam0))
	{
		return 0;
	}
	if (unk_0x4999364EFF3B7CFC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31595 != 0 && !Global_77248)
	{
		return 0;
	}
	if (func_38(&Global_4272779))
	{
		if (func_36(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_29(&Global_4272779, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6296023D689C5E64(iParam0))
		{
			return 0;
		}
		if (unk_0x4999364EFF3B7CFC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_40(14) && !func_39(iParam1))
	{
		return 0;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	func_32(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_30(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_30(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_40(14) && !func_39(iParam1))
	{
		return 0;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_31(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_34(uParam0, (Global_4272778 - 0.5f));
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_34(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_35(var uParam0)
{
	return uParam0->f_80;
}

bool func_36(var uParam0, int iParam1)
{
	return func_37(uParam0, iParam1) != -1;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_38(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_40(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_41(int iParam0, int iParam1)
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

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_44()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59272[0] == iVar0)
		{
			Global_59272[0] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59272[1] == iVar0)
		{
			Global_59272[1] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59272[2] == iVar0)
		{
			Global_59272[2] = iVar0;
		}
	}
}

int func_45(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

void func_46(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (!func_52(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					func_50(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						func_47();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					func_50(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					func_50(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					func_50(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					func_50(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					func_50(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						bVar0 = unk_0x1F9A96198946E6F0(unk_0x7D2B9E6A64637269());
						if (bVar0)
						{
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
						}
						func_50(unk_0x7D2B9E6A64637269(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						func_47();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					func_50(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					func_50(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					func_50(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					func_50(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_111345)
					{
						func_50(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_111345 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					func_50(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (unk_0x1275587246A96F24())
					{
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 4000)
					{
						if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
						{
							bVar0 = unk_0x1F9A96198946E6F0(unk_0x7D2B9E6A64637269());
							if (bVar0)
							{
								unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
							}
							switch (unk_0x35A1BC0F4035B2F2())
							{
								case 0:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									func_50(unk_0x7D2B9E6A64637269(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						bVar0 = unk_0x1F9A96198946E6F0(unk_0x7D2B9E6A64637269());
						if (bVar0)
						{
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
						}
						func_50(unk_0x7D2B9E6A64637269(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					func_50(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						bVar0 = unk_0x1F9A96198946E6F0(unk_0x7D2B9E6A64637269());
						if (bVar0)
						{
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
						}
						func_50(unk_0x7D2B9E6A64637269(), "THANKS", 7);
						if (bVar0)
						{
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_52(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_47()
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_48();
	if (!unk_0xAB6A270F84A8781E(sVar0))
	{
		bVar1 = unk_0x1F9A96198946E6F0(unk_0x7D2B9E6A64637269());
		if (bVar1)
		{
			unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
		}
		func_50(unk_0x7D2B9E6A64637269(), sVar0, 7);
		if (bVar1)
		{
			unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
		}
	}
}

char* func_48()
{
	char cVar0[32];
	
	StringCopy(&cVar0, unk_0x122A00293D3E7167(func_49(Local_43.x)), 32);
	if (unk_0xDA654EB115F9FF7D("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (unk_0xDA654EB115F9FF7D("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (unk_0xDA654EB115F9FF7D("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (unk_0xDA654EB115F9FF7D("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (unk_0xDA654EB115F9FF7D("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (unk_0xDA654EB115F9FF7D("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (unk_0xDA654EB115F9FF7D("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (unk_0xDA654EB115F9FF7D("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (unk_0xDA654EB115F9FF7D("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (unk_0xDA654EB115F9FF7D("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (unk_0xDA654EB115F9FF7D("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (unk_0xDA654EB115F9FF7D("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (unk_0xDA654EB115F9FF7D("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (unk_0xDA654EB115F9FF7D("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (unk_0xDA654EB115F9FF7D("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (unk_0xDA654EB115F9FF7D("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (unk_0xDA654EB115F9FF7D("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (unk_0xDA654EB115F9FF7D("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (unk_0xDA654EB115F9FF7D("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (unk_0xDA654EB115F9FF7D("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (unk_0xDA654EB115F9FF7D("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (unk_0xDA654EB115F9FF7D("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (unk_0xDA654EB115F9FF7D("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (unk_0xDA654EB115F9FF7D("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (unk_0xDA654EB115F9FF7D("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (unk_0xDA654EB115F9FF7D("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xDA654EB115F9FF7D("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (unk_0xDA654EB115F9FF7D("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (unk_0xDA654EB115F9FF7D("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (unk_0xDA654EB115F9FF7D("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (unk_0xDA654EB115F9FF7D("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (unk_0xDA654EB115F9FF7D("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (unk_0xDA654EB115F9FF7D("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (unk_0xDA654EB115F9FF7D("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (unk_0xDA654EB115F9FF7D("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (unk_0xDA654EB115F9FF7D("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (unk_0xDA654EB115F9FF7D("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (unk_0xDA654EB115F9FF7D("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (unk_0xDA654EB115F9FF7D("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (unk_0xDA654EB115F9FF7D("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (unk_0xDA654EB115F9FF7D("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (unk_0xDA654EB115F9FF7D("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (unk_0xDA654EB115F9FF7D("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (unk_0xDA654EB115F9FF7D("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (unk_0xDA654EB115F9FF7D("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (unk_0xDA654EB115F9FF7D("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (unk_0xDA654EB115F9FF7D("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (unk_0xDA654EB115F9FF7D("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (unk_0xDA654EB115F9FF7D("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (unk_0xDA654EB115F9FF7D("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (unk_0xDA654EB115F9FF7D("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (unk_0xDA654EB115F9FF7D("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xDA654EB115F9FF7D("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (unk_0xDA654EB115F9FF7D("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (unk_0xDA654EB115F9FF7D("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (unk_0xDA654EB115F9FF7D("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (unk_0xDA654EB115F9FF7D("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (unk_0xDA654EB115F9FF7D("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (unk_0xDA654EB115F9FF7D("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (unk_0xDA654EB115F9FF7D("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (unk_0xDA654EB115F9FF7D("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (unk_0xDA654EB115F9FF7D("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (unk_0xDA654EB115F9FF7D("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (unk_0xDA654EB115F9FF7D("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (unk_0xDA654EB115F9FF7D("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (unk_0xDA654EB115F9FF7D("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (unk_0xDA654EB115F9FF7D("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (unk_0xDA654EB115F9FF7D("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (unk_0xDA654EB115F9FF7D("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (unk_0xDA654EB115F9FF7D("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (unk_0xDA654EB115F9FF7D("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (unk_0xDA654EB115F9FF7D("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (unk_0xDA654EB115F9FF7D("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (unk_0xDA654EB115F9FF7D("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (unk_0xDA654EB115F9FF7D("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (unk_0xDA654EB115F9FF7D("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (unk_0xDA654EB115F9FF7D("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (unk_0xDA654EB115F9FF7D("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (unk_0xDA654EB115F9FF7D("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (unk_0xDA654EB115F9FF7D("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (unk_0xDA654EB115F9FF7D("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (unk_0xDA654EB115F9FF7D("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (unk_0xDA654EB115F9FF7D("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (unk_0xDA654EB115F9FF7D("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (unk_0xDA654EB115F9FF7D("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (unk_0xDA654EB115F9FF7D("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (unk_0xDA654EB115F9FF7D("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (unk_0xDA654EB115F9FF7D("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (unk_0xDA654EB115F9FF7D("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (unk_0xDA654EB115F9FF7D("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (unk_0xDA654EB115F9FF7D("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (unk_0xDA654EB115F9FF7D("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (unk_0xDA654EB115F9FF7D("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (unk_0xDA654EB115F9FF7D("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (unk_0xDA654EB115F9FF7D("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (unk_0xDA654EB115F9FF7D("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (unk_0xDA654EB115F9FF7D("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (unk_0xDA654EB115F9FF7D("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (unk_0xDA654EB115F9FF7D("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (unk_0xDA654EB115F9FF7D("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (unk_0xDA654EB115F9FF7D("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_49(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = unk_0xD2B70038FDC7433C(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0xFB72730C92FB0683(iParam0);
		if (unk_0xBFCE58B2B3249999(iVar3, 0))
		{
			Var0 = { unk_0xD6E677FAD7521410(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0xFAA5505029C4B5A6(unk_0xFB72730C92FB0683(iParam0));
		if (!unk_0xECEC7528A52B4EE8(iVar4))
		{
			Var0 = { unk_0xD6E677FAD7521410(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0x6F9D3E582271B7F5(unk_0xFB72730C92FB0683(iParam0));
		if (unk_0x419E13582192CFEA(iVar5))
		{
			Var0 = { unk_0xD6E677FAD7521410(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0xB5BBED356C99E704(iParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0x0EAFB027A1FA5757(iParam0);
		if (unk_0xC2EBFA0B77E6B2D4(uVar6))
		{
			Var0 = { unk_0xCA4950AD4AC0DAD8(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0xB5BBED356C99E704(iParam0) };
	}
	return Var0;
}

void func_50(int iParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(iParam0, sParam1, func_51(iParam2), 1);
}

int func_51(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0xCCCF5C35DC145D71(iParam0))
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xCCCF5C35DC145D71(unk_0x7D2B9E6A64637269()))
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_53())
	{
		func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x123480158F10FA67())
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xA13444986DC34E90(func_6()))
		{
			unk_0xEB394039A41B68FE(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x5E3585E4AFD19C6F(func_6(), iVar2);
					if (!unk_0xECEC7528A52B4EE8(iVar0))
					{
						if (unk_0xCCCF5C35DC145D71(iVar0))
						{
							func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_53()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_54(char* sParam0)
{
	func_55(sParam0);
}

void func_55(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D(uParam0, uParam0))
	{
	}
}

int func_56(int iParam0)
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

int func_57()
{
	func_58();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_61(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_60(unk_0x7D2B9E6A64637269());
			if (func_59(iVar0) && (!func_40(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_59(Global_112293.f_2361.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return func_62(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_62(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

int func_63()
{
	if (func_64(1) == func_57())
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	return Global_112293.f_24902[iParam0 /*4*/];
}

void func_65()
{
	if (func_228())
	{
		func_226();
		func_225();
		func_224();
		if (!func_221())
		{
			func_215();
		}
		func_214();
		if (iLocal_951 != 4)
		{
			func_46(Global_111325, &iLocal_828);
			if (iLocal_951 != 0)
			{
				if (func_212())
				{
					if (unk_0xDAE4BC89A198A6AF(uLocal_113))
					{
						func_189();
						iLocal_60 = 1;
					}
				}
				func_180();
			}
		}
		switch (iLocal_951)
		{
			case 0:
				if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					if (unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
					{
						if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3) && !unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
						{
							if (!func_2(Global_111325, -2118855366))
							{
								unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 1, 1000000);
							}
						}
					}
				}
				if (func_179())
				{
					if (func_178() && !unk_0x195733224245A760(unk_0x7D2B9E6A64637269()))
					{
						func_189();
						iLocal_828 = 1;
						iLocal_950 = 0;
						Global_111361 = 0;
						iLocal_90 = 0;
						iLocal_68 = 0;
						iLocal_58 = 0;
						iLocal_60 = 1;
						func_177();
						iLocal_951 = 1;
					}
				}
				break;
			
			case 1:
				if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					if (unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
					{
						if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3) && !unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
						{
							if (!func_2(Global_111325, -2118855366))
							{
								unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 1, 1000000);
							}
						}
					}
				}
				func_176(&Global_111324, iLocal_992);
				if (func_175())
				{
					unk_0x39255E004257D303(joaat("sp_number_of_taxis_used"), 1f);
					iLocal_60 = 1;
					iLocal_951 = 2;
				}
				break;
			
			case 2:
				if (func_175())
				{
					func_172();
				}
				break;
			
			case 3:
				func_171();
				break;
			
			case 4:
				func_81();
				break;
		}
		func_66();
	}
	else
	{
		iLocal_952 = 2;
	}
}

void func_66()
{
	char* sVar0;
	
	if (!func_221())
	{
		if (unk_0xDAE4BC89A198A6AF(uLocal_114))
		{
			if (iLocal_951 != 0)
			{
				sVar0 = unk_0x908D1ACF42DAF9B8(2, 218, 1);
				if (!unk_0xDA654EB115F9FF7D(sLocal_109, sVar0))
				{
					sLocal_109 = sVar0;
					iLocal_60 = 1;
				}
				if (iLocal_60)
				{
					Local_816 = { func_80() };
					func_78(&uLocal_115);
					func_77(0, 75, "TXM_EXIT", &uLocal_115, 0, 361);
					if (iLocal_93 > 1)
					{
						func_77(2, 218, "TXM_CDES", &uLocal_115, 0, 361);
					}
					if (!bLocal_62)
					{
						if (iLocal_93 > 0)
						{
							func_77(2, 176, "TXM_SLCT", &uLocal_115, 0, 361);
						}
					}
					else if (iLocal_951 == 2)
					{
						func_77(2, 177, "TXM_STOP", &uLocal_115, 0, 361);
						if (bLocal_61)
						{
							func_77(2, 176, "TXM_SLCT", &uLocal_115, 0, 361);
						}
						if (func_76())
						{
							func_77(2, 176, "TXM_SKIP", &uLocal_115, 0, 361);
						}
						if (!bLocal_66)
						{
							func_77(2, 179, "TXM_HURY", &uLocal_115, 0, 361);
						}
					}
					else if (iLocal_951 == 3)
					{
						func_77(2, 177, "TXM_STRT", &uLocal_115, 0, 361);
						if (bLocal_61)
						{
							func_77(2, 176, "TXM_SLCT", &uLocal_115, 0, 361);
						}
					}
					iLocal_60 = 0;
				}
				unk_0x27DA7E2B98AB7899(unk_0xA05F91D121569413());
				unk_0x51D19921B47902B3(0);
				func_75(1);
				func_74(1);
				func_67(&uLocal_114, &Local_816, &uLocal_115, func_73(&uLocal_115));
			}
		}
		else
		{
			uLocal_114 = unk_0x42AA2CCF0B61DCD8("instructional_buttons");
		}
	}
	else
	{
		unk_0x3D9BC07C93913E04(&uLocal_114);
		iLocal_60 = 1;
	}
}

void func_67(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x0C7C436873368EDB(2))
	{
		*uParam2 = 0;
		if (unk_0xDAE4BC89A198A6AF(*uParam0))
		{
			if (unk_0x3640D836D145B814())
			{
				unk_0x704F8697BB515627(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x9D7453DF8B7E9E0B(0);
				unk_0x392841D58D2EED1D();
			}
			unk_0x704F8697BB515627(*uParam0, "CLEAR_ALL");
			unk_0x392841D58D2EED1D();
		}
		func_72(uParam2);
	}
	if (Global_1315740 < 2)
	{
		func_74(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xDAE4BC89A198A6AF(*uParam0))
		{
			*uParam0 = unk_0x42AA2CCF0B61DCD8("instructional_buttons");
		}
		if (unk_0xDAE4BC89A198A6AF(*uParam0))
		{
			unk_0xC9E2A193C0DDFC43(*uParam0, "CLEAR_ALL");
			if (unk_0x3640D836D145B814())
			{
				unk_0x704F8697BB515627(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x9D7453DF8B7E9E0B(1);
				unk_0x392841D58D2EED1D();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0x234B68AC2E35ED5A(uParam2->f_689, iVar0))
				{
					unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(iVar0);
					if (!unk_0x234B68AC2E35ED5A(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_71(unk_0x908D1ACF42DAF9B8(iVar1, iVar2, 1));
						if (iVar3 < 361)
						{
							func_71(unk_0x908D1ACF42DAF9B8(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_71(unk_0xD895F953C52A8886(uVar4, uVar5, 1));
					}
					if (unk_0x234B68AC2E35ED5A(uParam2->f_686, iVar0))
					{
						unk_0x35CA0C119E6A2A27(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x4E2EF4B6B665F3F4(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x38CD3C04C877C35F(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0x234B68AC2E35ED5A(uParam2->f_687, iVar0))
							{
								unk_0x38CD3C04C877C35F(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0xD4B2C39F7AD5A6A6();
					}
					else if (unk_0x234B68AC2E35ED5A(uParam2->f_688, iVar0))
					{
						unk_0x35CA0C119E6A2A27(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0xA91D83F2CC1345A6(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0xD4B2C39F7AD5A6A6();
					}
					else
					{
						func_70(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0x3640D836D145B814())
					{
						if (unk_0x234B68AC2E35ED5A(uParam2->f_691, iVar0))
						{
							unk_0x9D7453DF8B7E9E0B(1);
							unk_0x9E3D03981E2E9AD9(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x9D7453DF8B7E9E0B(0);
							unk_0x9E3D03981E2E9AD9(361);
						}
					}
					unk_0x392841D58D2EED1D();
				}
				else
				{
					unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(iVar0);
					func_71(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xAB6A270F84A8781E(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_71(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (unk_0x234B68AC2E35ED5A(uParam2->f_686, iVar0))
					{
						unk_0x35CA0C119E6A2A27(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x4E2EF4B6B665F3F4(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x38CD3C04C877C35F(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0x234B68AC2E35ED5A(uParam2->f_687, iVar0))
							{
								unk_0x38CD3C04C877C35F(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0xD4B2C39F7AD5A6A6();
					}
					else if (unk_0x234B68AC2E35ED5A(uParam2->f_688, iVar0))
					{
						unk_0x35CA0C119E6A2A27(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0xA91D83F2CC1345A6(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0xD4B2C39F7AD5A6A6();
					}
					else
					{
						func_70(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0x3640D836D145B814())
					{
						unk_0x9D7453DF8B7E9E0B(0);
						unk_0x9E3D03981E2E9AD9(361);
					}
					unk_0x392841D58D2EED1D();
				}
				iVar0++;
			}
			unk_0x704F8697BB515627(*uParam0, "SET_MAX_WIDTH");
			unk_0x82D42F43BE26EB72(uParam2->f_699);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x392841D58D2EED1D();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_69(*uParam0, uParam1);
	}
	func_68();
}

void func_68()
{
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xEFD424FDD55A6EC7(6);
	unk_0xEFD424FDD55A6EC7(8);
	unk_0xEFD424FDD55A6EC7(9);
}

void func_69(var uParam0, var uParam1)
{
	unk_0x44EF5678D6916481(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_70(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_71(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

void func_72(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_73(var uParam0)
{
	return uParam0->f_692;
}

void func_74(int iParam0)
{
	Global_1315740 = iParam0;
}

void func_75(int iParam0)
{
	Global_1380638.f_1121 = iParam0;
}

int func_76()
{
	if (iLocal_951 != 2)
	{
		return 0;
	}
	if (bLocal_61)
	{
		return 0;
	}
	if (fLocal_85 < 50f)
	{
		return 0;
	}
	if (unk_0x0E8572B08CEB6A11(uLocal_70))
	{
		if (unk_0x2671671BBCC6AD9F(uLocal_70))
		{
			return 0;
		}
	}
	return 1;
}

void func_77(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x191DDA30577F440A(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x191DDA30577F440A(&(uParam3->f_691), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

void func_78(var uParam0)
{
	func_79(uParam0);
	uParam0->f_692 = 1;
}

void func_79(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_80()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_81()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	unk_0x66647E28E2119755(0);
	unk_0x66647E28E2119755(1);
	unk_0x66647E28E2119755(2);
	switch (iLocal_953)
	{
		case 0:
			func_163(1);
			if (func_162(iLocal_91, 500))
			{
				unk_0x8BA9BCDD56AA7115(250);
				unk_0xB84B43B766630B5C("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_953 = 1;
			}
			break;
		
		case 1:
			if (unk_0x8B6A925F148E0E94() && unk_0xB30CD10E2CD1B67D("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					unk_0x32051C1124051B7B(Global_111324, 0);
				}
				unk_0x1036762BD3781C84();
				unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
				if (unk_0x041B9511CD0AC7F4("taxi"))
				{
					unk_0x85EFAD0D44058E0C("taxi");
				}
				if (unk_0x419E13582192CFEA(iLocal_111))
				{
					unk_0x04F4D55F2C0C756D(&iLocal_111);
					unk_0x824F744352C8BC82(iLocal_110);
				}
				if (unk_0x2671671BBCC6AD9F(uLocal_70))
				{
					unk_0xB9756A98505CE062(0);
					Global_111341 = 0;
					unk_0x6FA8221C9D2ECB46(uLocal_70, 0);
					unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
					unk_0x0471F84E07D156D1();
					unk_0x97D6BA3D63E00279();
					unk_0x3BBBF463E1825A03(0);
				}
				func_160(iLocal_992);
				iLocal_91 = unk_0xDFB7BFA6482FEE1E();
				if (bLocal_61)
				{
					bLocal_63 = false;
					bLocal_61 = false;
					Local_43 = { Local_829[iLocal_94 /*3*/] };
				}
				if (!bLocal_63)
				{
					iLocal_90 = 0;
					iLocal_950 = 0;
					iLocal_953 = 2;
				}
				else
				{
					func_159();
					iLocal_953 = 3;
				}
			}
			else
			{
				unk_0xB84B43B766630B5C("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_126(&Local_43, &Global_111331, &Global_111337))
			{
				func_159();
				iLocal_953 = 3;
			}
			break;
		
		case 3:
			if (Global_77264 == -1)
			{
				func_125();
				func_124();
				func_122();
				func_118();
				func_117();
				unk_0x6AF7EE4DD9F8B944(Global_111331, 5f, 1, 0, 0, 0);
				func_113(1097859072);
				if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					unk_0x78CDDD1E6367978D(Global_111324, Global_111331, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(Global_111324, Global_111337);
					unk_0xA2C015B68CE01357(Global_111324, 1);
				}
				unk_0xDF23DCD7A3E1B7A5(0f);
				unk_0x3A13FD2813C8251F(0f, 1065353216);
				unk_0xED93DAC36CA89AF2();
				unk_0x6AF7EE4DD9F8B944(Global_111331, 5000f, 1, 0, 0, 0);
				unk_0xBA7E979B202649F9(Global_111331, 5000f, 0);
				unk_0xAA464864BA733E26(Global_111331, 30f, 0);
				unk_0xF22CC2CA28E44D4F(Global_111331, 5000f);
				unk_0x86328A349E5CFC0B(Global_111331, 5000f);
				if (Global_96292 != -1)
				{
					func_112(Global_96292, 1);
					func_111(Global_96292);
				}
				iLocal_825 = func_110(Local_43.x);
				if (iLocal_825 != -1)
				{
					func_112(iLocal_825, 1);
				}
				iLocal_59 = 0;
				iLocal_953 = 4;
			}
			break;
		
		case 4:
			if (unk_0x22C43B6780E8FE5B(Global_111331, 4500f, 0))
			{
				iLocal_59 = 1;
				iLocal_953 = 5;
			}
			else if (func_162(iLocal_91, 2500))
			{
				iLocal_953 = 5;
			}
			break;
		
		case 5:
			if (unk_0xCE84F8AB9BD41C13())
			{
				if (unk_0xABE4F4FD4329B037())
				{
					if (iLocal_825 != -1)
					{
						unk_0xED93DAC36CA89AF2();
						iLocal_59 = 0;
						func_108(iLocal_825);
						func_112(iLocal_825, 0);
					}
					iLocal_953 = 6;
				}
				else if (func_162(iLocal_91, 20000))
				{
					if (iLocal_825 != -1)
					{
						unk_0xED93DAC36CA89AF2();
						iLocal_59 = 0;
						func_108(iLocal_825);
						func_112(iLocal_825, 0);
					}
					iLocal_953 = 6;
				}
			}
			else
			{
				if (iLocal_825 != -1)
				{
					func_108(iLocal_825);
					func_112(iLocal_825, 0);
				}
				iLocal_59 = 0;
				iLocal_953 = 6;
			}
			break;
		
		case 6:
			func_107();
			unk_0x824F1CA67B3DE4E6();
			unk_0x100BDBF4D9AD9C8C();
			unk_0xCAE17D0341C314BC();
			if (iLocal_825 != -1)
			{
				bVar1 = true;
				if (Global_90158[iLocal_825 /*34*/].f_13 == -1 && Global_90158[iLocal_825 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((func_57() == 0 && !unk_0x234B68AC2E35ED5A(Global_90158[iLocal_825 /*34*/].f_15, 8)) || (func_57() == 1 && !unk_0x234B68AC2E35ED5A(Global_90158[iLocal_825 /*34*/].f_15, 9))) || (func_57() == 2 && !unk_0x234B68AC2E35ED5A(Global_90158[iLocal_825 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_105(Global_90158[iLocal_825 /*34*/].f_13, Global_90158[iLocal_825 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					unk_0x67AEA8405DE74BE4(Global_90158[iLocal_825 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_107 = func_98(1129381888, 1);
			iLocal_953 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_97(iLocal_107))
			{
				bVar0 = false;
			}
			if (!func_87(Global_111331))
			{
				bVar0 = false;
			}
			if (!func_86())
			{
				bVar0 = false;
			}
			if (!unk_0xCF371493BAEB8860())
			{
				bVar0 = false;
			}
			if (iLocal_59)
			{
				if (unk_0xCE84F8AB9BD41C13())
				{
					if (!unk_0xABE4F4FD4329B037())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_825 != -1 && Global_96297)
			{
				bVar0 = false;
			}
			if (func_162(iLocal_91, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_59)
				{
					if (unk_0xCE84F8AB9BD41C13())
					{
						unk_0xED93DAC36CA89AF2();
					}
					iLocal_59 = 0;
				}
				if (iLocal_69)
				{
					iLocal_69 = 0;
					unk_0x7956E831D8C0C17C(Global_111331 + Vector(100f, 0f, 0f), &fVar2, 0, 0);
					if (fVar2 > Global_111331.f_2)
					{
						Global_111331.f_2 = (fVar2 + 0.5f);
					}
				}
				func_113(12f);
				func_83();
				if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					unk_0xA2C015B68CE01357(Global_111324, 0);
					unk_0xCD37A28258D70638(Global_111324, Global_111337);
					unk_0x78CDDD1E6367978D(Global_111324, Global_111331, 1, 0, 0, 1);
					unk_0x47D0DDD8833C5E5F(Global_111324, 1084227584);
					unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 24, 5000);
				}
				iLocal_91 = unk_0xDFB7BFA6482FEE1E();
				iLocal_953 = 8;
			}
			break;
		
		case 8:
			if (func_162(iLocal_91, 500))
			{
				if (unk_0xB30CD10E2CD1B67D("FADE_OUT_WORLD_250MS_SCENE"))
				{
					unk_0xC0BBE340BE2AA02D("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					unk_0x32051C1124051B7B(Global_111324, 1);
				}
				if (!func_82())
				{
					unk_0x6E1E3A5B1F9AB95B(250);
				}
				iLocal_953 = 9;
			}
			break;
		
		case 9:
			if (unk_0xE0A6F16F546C8274() || func_82())
			{
				if (((!Global_96298 && iLocal_825 != -1) && iLocal_825 != 72) && iLocal_825 != 87)
				{
					func_111(iLocal_825);
				}
				func_163(0);
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_111324, 1))
					{
						unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
					}
				}
				unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 24, 5000);
				unk_0x504B26425DFF773C(Global_111325, 1);
				bLocal_67 = true;
				iLocal_952 = 2;
				iLocal_953 = 10;
			}
			break;
		
		case 10:
			break;
	}
}

bool func_82()
{
	return unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13);
}

void func_83()
{
	struct<3> Var0;
	float fVar3;
	
	switch (iLocal_826)
	{
		case 92:
			Var0 = { func_85(229, 0) };
			fVar3 = unk_0x0BABEFEA577FCFA4(Global_111331, Var0, 1);
			if (fVar3 < 100f)
			{
				Var0 = { func_84(Global_111331 - Var0) };
				Var0 = { (Global_111331 + (Var0.x * IntToFloat((100 - SYSTEM::ROUND(fVar3))))), (Global_111331.f_1 + (Var0.f_1 * IntToFloat((100 - SYSTEM::ROUND(fVar3))))), Global_111331.f_2 };
				unk_0x8A60906D0693350F(Var0, &Global_111331, &Global_111337, 1, 1077936128, 0);
				unk_0x78CDDD1E6367978D(Global_111324, Global_111331, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(Global_111324, Global_111337);
			}
			break;
	}
}

Vector3 func_84(struct<3> Param0)
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

Vector3 func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31724[iVar0 /*23*/][iParam1 /*3*/];
}

bool func_86()
{
	return !Global_76066.f_553;
}

int func_87(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_95(Param0);
	if (!func_94(&uLocal_52))
	{
		iLocal_51 = 0;
		func_92(&uLocal_52, 0f);
	}
	if (iVar0 == iLocal_51 || func_89(&uLocal_52) > 8f)
	{
		func_88(&uLocal_52);
		iLocal_51 = 0;
		return 1;
	}
	return 0;
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_89(var uParam0)
{
	if (func_94(uParam0))
	{
		if (func_91(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_90(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_90(bool bParam0)
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

bool func_91(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

void func_92(var uParam0, float fParam1)
{
	if (!func_94(uParam0))
	{
		func_93(uParam0, fParam1);
	}
}

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_90(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_94(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

int func_95(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_96(0, 4))
	{
		iVar1 = 70;
		while (iVar1 <= 72)
		{
			fVar2 = SYSTEM::VDIST2(func_85(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_96(0, 0))
	{
		iVar1 = 125;
		while (iVar1 <= 137)
		{
			fVar2 = SYSTEM::VDIST2(func_85(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_96(0, 10))
	{
		iVar1 = 125;
		fVar2 = SYSTEM::VDIST2(func_85(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

bool func_96(int iParam0, int iParam1)
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

int func_97(int iParam0)
{
	if (iParam0 != -1)
	{
		if (!Global_111380[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, bool bParam1)
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
	fVar34 = iParam0;
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (func_59(func_57()))
		{
			iVar36 = func_104();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar32 /*6*/], 2) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar32 /*6*/], 3))
				{
					func_99(iVar32, &Var0);
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

void func_99(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_100(uParam1, "Abigail1", func_102(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 1:
			func_100(uParam1, "Abigail2", func_102(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 2:
			func_100(uParam1, "Barry1", func_102(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 3:
			func_100(uParam1, "Barry2", func_102(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 4:
			func_100(uParam1, "Barry3", func_102(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 5:
			func_100(uParam1, "Barry3A", func_102(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 6:
			func_100(uParam1, "Barry3C", func_102(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 7:
			func_100(uParam1, "Barry4", func_102(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_101(iParam0), 0, 0);
			break;
		
		case 8:
			func_100(uParam1, "Dreyfuss1", func_102(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 9:
			func_100(uParam1, "Epsilon1", func_102(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 10:
			func_100(uParam1, "Epsilon2", func_102(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 11:
			func_100(uParam1, "Epsilon3", func_102(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 12:
			func_100(uParam1, "Epsilon4", func_102(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 13:
			func_100(uParam1, "Epsilon5", func_102(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 14:
			func_100(uParam1, "Epsilon6", func_102(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 15:
			func_100(uParam1, "Epsilon7", func_102(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 16:
			func_100(uParam1, "Epsilon8", func_102(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 17:
			func_100(uParam1, "Extreme1", func_102(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 18:
			func_100(uParam1, "Extreme2", func_102(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 19:
			func_100(uParam1, "Extreme3", func_102(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 20:
			func_100(uParam1, "Extreme4", func_102(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 21:
			func_100(uParam1, "Fanatic1", func_102(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_101(iParam0), 1, 0);
			break;
		
		case 22:
			func_100(uParam1, "Fanatic2", func_102(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_101(iParam0), 1, 0);
			break;
		
		case 23:
			func_100(uParam1, "Fanatic3", func_102(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_101(iParam0), 0, 1);
			break;
		
		case 24:
			func_100(uParam1, "Hao1", func_102(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_101(iParam0), 0, 1);
			break;
		
		case 25:
			func_100(uParam1, "Hunting1", func_102(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 26:
			func_100(uParam1, "Hunting2", func_102(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 27:
			func_100(uParam1, "Josh1", func_102(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 28:
			func_100(uParam1, "Josh2", func_102(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 29:
			func_100(uParam1, "Josh3", func_102(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 30:
			func_100(uParam1, "Josh4", func_102(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 31:
			func_100(uParam1, "Maude1", func_102(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 32:
			func_100(uParam1, "Minute1", func_102(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 33:
			func_100(uParam1, "Minute2", func_102(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 34:
			func_100(uParam1, "Minute3", func_102(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 35:
			func_100(uParam1, "MrsPhilips1", func_102(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 36:
			func_100(uParam1, "MrsPhilips2", func_102(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 37:
			func_100(uParam1, "Nigel1", func_102(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 38:
			func_100(uParam1, "Nigel1A", func_102(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 39:
			func_100(uParam1, "Nigel1B", func_102(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_101(iParam0), 1, 1);
			break;
		
		case 40:
			func_100(uParam1, "Nigel1C", func_102(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_101(iParam0), 1, 1);
			break;
		
		case 41:
			func_100(uParam1, "Nigel1D", func_102(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_101(iParam0), 1, 1);
			break;
		
		case 42:
			func_100(uParam1, "Nigel2", func_102(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 43:
			func_100(uParam1, "Nigel3", func_102(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 44:
			func_100(uParam1, "Omega1", func_102(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 45:
			func_100(uParam1, "Omega2", func_102(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 46:
			func_100(uParam1, "Paparazzo1", func_102(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 47:
			func_100(uParam1, "Paparazzo2", func_102(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 48:
			func_100(uParam1, "Paparazzo3", func_102(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 49:
			func_100(uParam1, "Paparazzo3A", func_102(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 50:
			func_100(uParam1, "Paparazzo3B", func_102(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 51:
			func_100(uParam1, "Paparazzo4", func_102(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 52:
			func_100(uParam1, "Rampage1", func_102(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 54:
			func_100(uParam1, "Rampage3", func_102(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 55:
			func_100(uParam1, "Rampage4", func_102(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 56:
			func_100(uParam1, "Rampage5", func_102(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 53:
			func_100(uParam1, "Rampage2", func_102(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 57:
			func_100(uParam1, "TheLastOne", func_102(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 58:
			func_100(uParam1, "Tonya1", func_102(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 59:
			func_100(uParam1, "Tonya2", func_102(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 60:
			func_100(uParam1, "Tonya3", func_102(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 61:
			func_100(uParam1, "Tonya4", func_102(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 62:
			func_100(uParam1, "Tonya5", func_102(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_100(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_101(int iParam0)
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

struct<2> func_102(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_103(iParam0) };
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

struct<2> func_103(int iParam0)
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

int func_104()
{
	func_58();
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

bool func_105(int iParam0, int iParam1)
{
	return func_106(unk_0xCA86FAB7FADC8353(), iParam0, iParam1);
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	Global_76066.f_553 = 1;
	Global_76066.f_554 = 0;
}

void func_108(int iParam0)
{
	if (func_109(iParam0))
	{
		Global_96293 = iParam0;
		Global_96297 = 1;
		return;
	}
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_96303[iVar0 /*17*/])
		{
			if (Global_96303[iVar0 /*17*/].f_9 != 263)
			{
				if (Global_31724[Global_96303[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_96303[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_111(int iParam0)
{
	if (Global_96292 != -1)
	{
		if (iParam0 == Global_96292)
		{
			Global_96296 = 1;
			return;
		}
	}
}

void func_112(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_93355[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_93355[iParam0 /*2*/] = 0;
	}
}

void func_113(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((func_116(89) || func_116(88)) || func_116(92)) || func_116(33)) || func_115() == 89) || func_115() == 88) || func_115() == 92) || func_115() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_111331 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_114(&iVar0, Var3, iParam0))
		{
			bVar1 = false;
			if (unk_0x9FB743331EC18DF4(Global_111331, iVar2, &Var3, 1, 1077936128, 0))
			{
				iVar2++;
			}
		}
	}
	if (SYSTEM::VDIST2(Var3, Global_111331) > 2f)
	{
		unk_0x88B0C92B04E14561(Var3, 0, &Global_111331, 0);
	}
}

int func_114(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0[5];
	int iVar6;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		*iParam0 = unk_0x7A0F33AA19956CEB(Param1, uParam4, iVar0[iVar6], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar6++;
	}
	return 0;
}

int func_115()
{
	return Global_77510;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_93355[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_90122)
	{
		if (Global_90122[iVar0 /*5*/] != -1)
		{
			if (Global_77517.f_109[Global_90122[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_117()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74193)
	{
		switch (Global_62323[Global_74194[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_74194[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_62106)
				{
					Global_74194[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_118()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_121(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_111331);
	if (bLocal_66)
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 200f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 200f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	else
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 100f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 100f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	unk_0xCE76368F9C118E01(iVar1, iVar2, 0);
	func_119((SYSTEM::TO_FLOAT((iVar1 * 60 + iVar2)) / 60f));
}

void func_119(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_94(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5)))
		{
			func_120(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_94(&(Global_112293.f_18101.f_362[iVar1 /*3*/])))
		{
			func_120(&(Global_112293.f_18101.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x5A5F8D595F57FCD3();
}

void func_120(var uParam0, float fParam1)
{
	if (func_94(uParam0))
	{
		func_93(uParam0, (func_89(uParam0) + fParam1));
	}
}

float func_121(struct<3> Param0, struct<3> Param3)
{
	return (SYSTEM::VMAG(Param3 - Param0) * 1.3f);
}

void func_122()
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_121(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_111331) / 50f) * fLocal_75) * 2.4f);
	iVar1 = (SYSTEM::FLOOR(fLocal_84) + SYSTEM::ROUND(fVar0));
	fVar0 = SYSTEM::TO_FLOAT(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = SYSTEM::ROUND(fVar0);
	iLocal_103 = (iLocal_103 + iVar1);
	fLocal_84 = (fLocal_84 + IntToFloat(iLocal_103));
	func_123();
}

void func_123()
{
	iLocal_105 = (iLocal_105 + SYSTEM::ROUND((unk_0x7FF6ACE380ED166C() * 1000f)));
	if (iLocal_105 > 5000)
	{
		fLocal_84 = (fLocal_84 + fLocal_75);
		iLocal_105 = 0;
	}
	if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Local_974, 0) > 50f)
	{
		fLocal_84 = (fLocal_84 + fLocal_75);
		iLocal_105 = 0;
		Local_974 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
	}
	iLocal_103 = SYSTEM::CEIL(fLocal_84);
	if (iLocal_103 != iLocal_104)
	{
		unk_0x704F8697BB515627(uLocal_113, "SET_TAXI_PRICE");
		unk_0x9E3D03981E2E9AD9(iLocal_103);
		unk_0x392841D58D2EED1D();
		fLocal_85 = SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_111331);
		iLocal_104 = iLocal_103;
	}
}

void func_124()
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_73)
	{
		case 0:
			iVar0 = joaat("sp0_dist_as_passenger_taxi");
			break;
		
		case 1:
			iVar0 = joaat("sp1_dist_as_passenger_taxi");
			break;
		
		case 2:
			iVar0 = joaat("sp2_dist_as_passenger_taxi");
			break;
		
		default:
			if (!func_40(14))
			{
			}
			break;
	}
	if (!func_40(14))
	{
		fVar1 = unk_0x643921BAF5EADA1B(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Global_111331);
		unk_0x39255E004257D303(iVar0, fVar1);
	}
}

void func_125()
{
	unk_0xED93DAC36CA89AF2();
	if (unk_0xE2BB9441C54169BF(Global_111003.f_218))
	{
		unk_0xDF27EE31B849DF76(Global_111003.f_218);
	}
}

int func_126(int iParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	
	if (unk_0x575B7C28D81C0B4D(*iParam0))
	{
		switch (iLocal_950)
		{
			case 0:
				iLocal_112 = 3;
				Local_962 = { func_49(*iParam0) };
				if (unk_0x575B7C28D81C0B4D(Global_111329) && *iParam0 == Global_111329)
				{
					*uParam1 = { Global_111334 };
					*uParam2 = Global_111338;
					Var0 = { Local_962 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_74 = SYSTEM::VMAG(Var0);
					iLocal_112 = 7;
					iLocal_950 = 4;
					return 1;
				}
				else
				{
					if (func_146(Local_962, uParam1, uParam2))
					{
						Var0 = { Local_962 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_74 = SYSTEM::VMAG(Var0);
						iLocal_112 = 7;
						iLocal_950 = 4;
						return 1;
					}
					iLocal_950 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_135(Local_962, uParam1, uParam2, 1))
				{
					Var0 = { Local_962 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_74 = SYSTEM::VMAG(Var0);
					iLocal_112 = 7;
					iLocal_950 = 4;
					return 1;
				}
				else
				{
					iLocal_90 = 0;
					iLocal_950 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (unk_0x419E13582192CFEA(Global_111324))
				{
					if (func_127(&Global_111324, unk_0xD6E677FAD7521410(Global_111324, 0), Local_962, uParam1, uParam2, &iLocal_90, iParam0, 1000))
					{
						iLocal_950 = 3;
						return 0;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_146(*uParam1, uParam1, uParam2))
				{
					Var0 = { Local_962 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_74 = SYSTEM::VMAG(Var0);
					iLocal_112 = 7;
				}
				iLocal_950 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_127(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7, var uParam8, int iParam9, var uParam10, int iParam11)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_134(Param4))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *iParam9 + 2;
	iVar25 = 50;
	func_132(Param1, Param4, &Local_965, &Local_968, iParam11);
	if (func_131(Local_965, Local_968))
	{
		while (!bVar19 && *iParam9 < iVar24)
		{
			if (Param4.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x87BE0E4947F798AC(Param4, *iParam9, uParam7, uParam8, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0x963E03AF64E1395B(*uParam7, 1, iVar20, 1077936128, 0);
				if (unk_0x197809C7C480B379(uVar18))
				{
					if (unk_0x74F971D19CAD1757(*uParam7, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
					{
						if (*uParam8 < 90f || *uParam8 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (unk_0x4664EA53DEDF81DD(uVar18) || !unk_0x16EF1D267886F0A5(uVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (SYSTEM::TO_FLOAT(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * SYSTEM::TO_FLOAT(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (SYSTEM::TO_FLOAT(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * SYSTEM::TO_FLOAT(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (unk_0x8748E0122DD45064(*uParam7, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param4.f_2 - uParam7->f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if ((func_130(Param4, *uParam7) || fVar17 < 0.5f) || func_128(uParam10))
						{
							*uParam7 = { unk_0x26C2ACB261895E70(*uParam7, *uParam8, fVar15, 0f, 0f) };
							if (unk_0xBFCE58B2B3249999(*uParam0, 0))
							{
								iVar11 = *uParam0;
							}
							if (!unk_0x7175011ED29304EE(*uParam7, 3f, 3f, 3f, iVar11))
							{
								if (func_135(*uParam7, uParam7, uParam8, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*iParam9++;
			if (*iParam9 >= iVar25)
			{
				*uParam7 = { Param4 };
				if (uParam7->f_2 == 1f)
				{
					fVar17 = 1f;
					fVar17 = unk_0x5A5140F48B41FF3F((*uParam7 - 2f), (uParam7->f_1 - 2f), (*uParam7 + 2f), (uParam7->f_1 + 2f));
					if (fVar17 > 1f)
					{
						iLocal_69 = 1;
						uParam7->f_2 = fVar17;
						uParam7->f_2 = (uParam7->f_2 + 0.5f);
					}
				}
				bVar19 = true;
			}
		}
		if (bVar19)
		{
			Var2 = { Param4 - *uParam7 };
			Var2.f_2 = 0f;
			fLocal_74 = SYSTEM::VMAG(Var2);
			if (fLocal_74 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_128(var uParam0)
{
	if (unk_0x575B7C28D81C0B4D(*uParam0) && func_129(*uParam0) == unk_0x7EA43B6762051EA2())
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	var uVar0;
	
	if (unk_0x575B7C28D81C0B4D(uParam0))
	{
		uVar0 = unk_0xB20B4DFB7E26761E(iParam0);
	}
	return uVar0;
}

int func_130(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_54("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_54("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_131(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0xA1CB00B61C47B900(Param0, Param0.f_1, Param3, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_132(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3 <= Param0)
	{
		Var0.x = Param3;
		Var3.x = Param0;
	}
	else
	{
		Var0.x = Param0;
		Var3.x = Param3;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_133(Var0, *uParam6, 1056964608, 0) || !func_133(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	unk_0xABAA7F8FD10DCDF2(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

int func_133(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_134(struct<3> Param0)
{
	char* sVar0;
	
	sVar0 = unk_0x122A00293D3E7167(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0xDA654EB115F9FF7D("SanAnd", sVar0) || unk_0xDA654EB115F9FF7D("Alamo", sVar0)) || unk_0xDA654EB115F9FF7D("ArmyB", sVar0)) || unk_0xDA654EB115F9FF7D("BhamCa", sVar0)) || unk_0xDA654EB115F9FF7D("Baytre", sVar0)) || unk_0xDA654EB115F9FF7D("BradT", sVar0)) || unk_0xDA654EB115F9FF7D("BradP", sVar0)) || unk_0xDA654EB115F9FF7D("CANNY", sVar0)) || unk_0xDA654EB115F9FF7D("CCreak", sVar0)) || unk_0xDA654EB115F9FF7D("ChamH", sVar0)) || unk_0xDA654EB115F9FF7D("CHU", sVar0)) || unk_0xDA654EB115F9FF7D("COSI", sVar0)) || unk_0xDA654EB115F9FF7D("CMSW", sVar0)) || unk_0xDA654EB115F9FF7D("Cypre", sVar0)) || unk_0xDA654EB115F9FF7D("Desrt", sVar0)) || unk_0xDA654EB115F9FF7D("ELGorl", sVar0)) || unk_0xDA654EB115F9FF7D("Galli", sVar0)) || unk_0xDA654EB115F9FF7D("Galfish", sVar0)) || unk_0xDA654EB115F9FF7D("Harmo", sVar0)) || unk_0xDA654EB115F9FF7D("HumLab", sVar0)) || unk_0xDA654EB115F9FF7D("Jail", sVar0)) || unk_0xDA654EB115F9FF7D("LAct", sVar0)) || unk_0xDA654EB115F9FF7D("LDam", sVar0)) || unk_0xDA654EB115F9FF7D("Lago", sVar0)) || unk_0xDA654EB115F9FF7D("MTChil", sVar0)) || unk_0xDA654EB115F9FF7D("MTJose", sVar0)) || unk_0xDA654EB115F9FF7D("MTGordo", sVar0)) || unk_0xDA654EB115F9FF7D("NCHU", sVar0)) || unk_0xDA654EB115F9FF7D("Oceana", sVar0)) || unk_0xDA654EB115F9FF7D("Palmpow", sVar0)) || unk_0xDA654EB115F9FF7D("PBluff", sVar0)) || unk_0xDA654EB115F9FF7D("Paleto", sVar0)) || unk_0xDA654EB115F9FF7D("PalCov", sVar0)) || unk_0xDA654EB115F9FF7D("PalFor", sVar0)) || unk_0xDA654EB115F9FF7D("PalHigh", sVar0)) || unk_0xDA654EB115F9FF7D("RTRAK", sVar0)) || unk_0xDA654EB115F9FF7D("Rancho", sVar0)) || unk_0xDA654EB115F9FF7D("SANDY", sVar0)) || unk_0xDA654EB115F9FF7D("TongvaH", sVar0)) || unk_0xDA654EB115F9FF7D("TongvaV", sVar0)) || unk_0xDA654EB115F9FF7D("Zenora", sVar0)) || unk_0xDA654EB115F9FF7D("Slab", sVar0)) || unk_0xDA654EB115F9FF7D("WindF", sVar0)) || unk_0xDA654EB115F9FF7D("Zancudo", sVar0)) || unk_0xDA654EB115F9FF7D("SanChia", sVar0)) || unk_0xDA654EB115F9FF7D("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_135(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_145(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam4 = 163.87f;
		return 1;
	}
	else if (func_145(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam4 = 0f;
		return 1;
	}
	else if (func_145(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*uParam4 = 355.3355f;
		return 1;
	}
	else if (func_145(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam4 = 94.6893f;
		return 1;
	}
	else if (func_145(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0x09C4C80EA1D5B2F7(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0x09C4C80EA1D5B2F7(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*uParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0x09C4C80EA1D5B2F7(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0x02BFF15CAA701972())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0x09C4C80EA1D5B2F7(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0x02BFF15CAA701972())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*uParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam4 = 228.7709f;
		if (unk_0x09C4C80EA1D5B2F7(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*uParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*uParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*uParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*uParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*uParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*uParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*uParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x09C4C80EA1D5B2F7(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x09C4C80EA1D5B2F7(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*uParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x09C4C80EA1D5B2F7(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x09C4C80EA1D5B2F7(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*uParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x09C4C80EA1D5B2F7(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*uParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*uParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*uParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*uParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*uParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*uParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*uParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*uParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_142(3, Var1))
	{
		if (func_141(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*uParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_140(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam4 = 275.4274f;
			return 1;
		}
		if (func_140(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam4 = 275.4411f;
			return 1;
		}
		if (func_140(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam4 = 301.2981f;
			return 1;
		}
		if (func_140(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_140(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x09C4C80EA1D5B2F7(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0x09C4C80EA1D5B2F7(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0x09C4C80EA1D5B2F7(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*uParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0xB36B8558948EA7A8(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*uParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*uParam4 = 71.6555f;
		return 1;
	}
	if (!func_138())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_142(7, Var1))
		{
			if (func_141(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_142(2, Var1))
	{
		if (func_141(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x02BFF15CAA701972())
			{
				switch (unk_0xB36B8558948EA7A8(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*uParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*uParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_137(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_137(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*uParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*uParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*uParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*uParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_136(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x09C4C80EA1D5B2F7(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x09C4C80EA1D5B2F7(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x09C4C80EA1D5B2F7(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x09C4C80EA1D5B2F7(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x09C4C80EA1D5B2F7(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0xB36B8558948EA7A8(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*uParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*uParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0x09C4C80EA1D5B2F7(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0xB36B8558948EA7A8(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (unk_0x09C4C80EA1D5B2F7(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0x09C4C80EA1D5B2F7(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*uParam4 = -20f;
		return 1;
	}
	else if (unk_0x09C4C80EA1D5B2F7(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*uParam4 = 160f;
		return 1;
	}
	if (unk_0x09C4C80EA1D5B2F7(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

bool func_136(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return SYSTEM::VDIST2(Param0, Param3) <= (fParam6 * fParam6);
}

float func_137(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param3, Param3.f_1, 0f);
}

int func_138()
{
	int iVar0;
	
	iVar0 = func_57();
	if (iVar0 == 0)
	{
		if (func_139(65))
		{
			return 1;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_139(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_139(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

bool func_140(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_141(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_142(int iParam0, struct<3> Param1)
{
	return SYSTEM::VDIST2(Param1, func_144(iParam0)) < func_143(iParam0);
}

float func_143(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_144(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_145(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.x > Param3.x && Param0.x < Param6.x) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_158(&Param0, &iLocal_826, &fVar0);
	func_156(&Param0, &iLocal_108, &fVar1);
	func_153(&Param0, &iLocal_827, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_152(iLocal_826, Param0))
		{
			if (func_151(iLocal_826, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_150(iLocal_108, Param0))
		{
			if (func_149(iLocal_108, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_148(iLocal_827, Param0))
		{
			if (func_147(iLocal_827, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 76:
			*uParam1 = { -1094.711f, -2641.982f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -1917.719f, 4445.75f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { -482.5762f, 1993.85f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { -208.3305f, 4195.341f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 1619.446f, 3820.96f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		
		case 75:
			*uParam1 = { 2045.169f, 2155.887f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 2952.767f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		
		case 105:
		case 106:
			*uParam1 = { 2119.676f, 4747.198f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -817.3487f, -1303.89f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { 2414.063f, 1503.77f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -203.2552f, 6536.089f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -1214.252f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		
		case 132:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { -1363.183f, 4468.691f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 2477.088f, 4948.677f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 1047.931f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1200.863f, -2049.46f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1960.388f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_148(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 76:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1157.595f, -2726.636f, 12.94464f, -1110.794f, -2679.33f, 22.94466f, 26f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1908.065f, 4432.693f, 51.3842f, -1962.212f, 4473.8f, 22.93989f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -541.8311f, 2050.599f, 186.3904f, -499.787f, 1968.325f, 228.0183f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -179.8588f, 4216.167f, 30.26505f, -246.32f, 4226.653f, 53.77886f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1634.122f, 3858.049f, 28.33912f, 1573.259f, 3800.442f, 48.35476f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 2057.873f, 2059.198f, 63.88074f, 1999.045f, 2190.544f, 122.2642f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 3028.084f, 2768.167f, 57.72984f, 2944.284f, 2772.836f, 30.23068f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 105:
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 2097.951f, 4820.308f, 55.48169f, 2151.254f, 4726.398f, 31.0732f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -763.5086f, -1297.98f, 2.000373f, -864.1372f, -1278.007f, 24.15038f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 2512.305f, 1519.462f, 28.55504f, 2380.374f, 1521.587f, 58.80984f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -193.5583f, 6533.439f, -1.902109f, -299.2512f, 6645.049f, 20.45973f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 129:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1171.147f, 4647.89f, 203.7937f, -1280.149f, 4457.597f, 5.653551f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 132:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -687.974f, 4499.52f, 114.781f, -826.0081f, 4496.864f, 49.88359f, 140f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1364.701f, 4490.626f, 49.52477f, -1367.169f, 4340.34f, -1.682158f, 100f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 2566.189f, 5007.007f, 97.36896f, 2491.714f, 4923.261f, 30.43494f, 80f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 136:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1009.917f, -163.4684f, 102.1028f, 1113.474f, -221.3295f, 49.8745f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 107:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (SYSTEM::VDIST2(Param1, -1230.622f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 65:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (SYSTEM::VDIST2(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_149(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.118f, 4206.743f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 1:
					*uParam1 = { -1582.89f, 4201.409f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.66f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 1:
					*uParam1 = { -2842.023f, 3145.086f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204.0333f, 1313.973f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906.4329f, -2694.28f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753.901f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859.543f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827.072f, 1282.288f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640.2675f, 6050.98f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92.2052f, -1254.828f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.967f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110.088f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67.1562f, 4560.134f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069.076f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073.129f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91.4237f, -1305.558f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479.249f, 3401.234f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149.978f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.933f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_150(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (SYSTEM::VDIST2(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (SYSTEM::VDIST2(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (SYSTEM::VDIST2(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (SYSTEM::VDIST2(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (SYSTEM::VDIST2(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1903.322f, -401.2384f, 19.23456f, -1844.879f, -445.7261f, 73.56197f, 115f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 794.2453f, 1277.443f, -100f, 833.8215f, 1277.108f, 400f, 19f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1015.526f, 6287.513f, -10.94449f, -761.3104f, 5895.014f, 45.33727f, 167.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -72.13491f, -1267.587f, 27.68361f, -72.18015f, -1256.712f, 31f, 30f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (SYSTEM::VDIST2(Param1, -683.4159f, 5841.043f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (SYSTEM::VDIST2(Param1, 566.1639f, -1773.817f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (SYSTEM::VDIST2(Param1, -1103.628f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -21.12362f, 4518.907f, 119.7836f, 43.13283f, 4538.929f, 72.58955f, 48f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (SYSTEM::VDIST2(Param1, -1099.502f, 790.2614f, 163.3998f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1088.425f, 372.0723f, 62.75896f, -967.03f, 363.5976f, 101.3483f, 75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -91.45676f, -1296.975f, 26.15437f, 40.67288f, -1297.459f, 58.29368f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (SYSTEM::VDIST2(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -78.38029f, 285.5254f, 102.6286f, -51.1546f, 357.5217f, 122.0617f, 40f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 420.5196f, 116.2892f, 77.57532f, 212.2937f, 193.6794f, 131.8767f, 250f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1140.158f, -540.9644f, 49.99944f, 972.3716f, -535.1002f, 85.64397f, 168.25f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (SYSTEM::VDIST2(Param1, -16.5304f, -1473.121f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_151(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.347f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361.675f, -2040.575f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.432f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 1:
					*uParam1 = { 14.0313f, -1460.48f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 1:
					*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 2:
					*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.097f, -2588.065f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185.1471f, -3047.229f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.472f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 1:
					*uParam1 = { 275.9677f, -1554.22f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.922f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 1:
					*uParam1 = { 847.5631f, -1559.719f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (unk_0xB36B8558948EA7A8(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.427f, 2852.173f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 1:
					*uParam1 = { 2686.404f, 2957.39f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.896f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_152(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -1535.754f, -922.101f, 4.122119f, -1487.87f, -961.3929f, 26.71922f, 50f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 53.12898f, -463.9999f, 36.9208f, 99.3761f, -329.3476f, 118.0454f, 125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1420.347f, -2036.558f, 47.36072f, 1341.11f, -2103.844f, 72.32651f, 55f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (SYSTEM::VDIST2(Param1, -13.89061f, -1449.29f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -2306.98f, 435.3038f, 171.4666f, -2303.291f, 366.3199f, 179.6018f, 65.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (SYSTEM::VDIST2(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, -995.978f, -517.4324f, 11.37763f, -1060.725f, -547.5588f, 65.33043f, 35.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.4064f, 43.03712f, 53f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 148.8361f, -3029.146f, 4.277727f, 148.1396f, -3342.344f, 22.90379f, 97.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 446.8174f, -1691.708f, 23.28233f, 288.5565f, -1552.352f, 108.3117f, 155f, 0, 1))
			{
				return 1;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 910.9382f, -1749.91f, 14.50614f, 921.7415f, -1455.248f, 99.67125f, 210f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 2657.302f, 2974.529f, 34.53447f, 2591.657f, 2880.223f, 68.08156f, 78.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (unk_0x09C4C80EA1D5B2F7(Param1, 83.32325f, -1312.172f, 23.33694f, 148.383f, -1273.553f, 49.46651f, 65f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_153(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 263;
	fVar1 = 999999f;
	iVar3 = 65;
	while (iVar3 <= 111)
	{
		*iParam1 = iVar3;
		if (func_155(iParam1))
		{
			if (func_154(*iParam1))
			{
				Var4 = { func_85(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 125;
	while (iVar3 <= 137)
	{
		*iParam1 = iVar3;
		if (func_155(iParam1))
		{
			if (func_154(*iParam1))
			{
				Var4 = { func_85(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 263)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 263;
	*fParam2 = 999999f;
	return 0;
}

bool func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x575B7C28D81C0B4D(Global_31724[iVar0 /*23*/].f_19);
}

int func_155(var uParam0)
{
	if ((((((((((((((((((((*uParam0 == 70 || *uParam0 == 71) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 75) || *uParam0 == 72) || *uParam0 == 76) || *uParam0 == 105) || *uParam0 == 106) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 129) || *uParam0 == 131) || *uParam0 == 132) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 136) || *uParam0 == 107) || *uParam0 == 65)
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	struct<27> Var7;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 63)
	{
		*iParam1 = iVar6;
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572[*iParam1 /*6*/], 0) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[*iParam1 /*6*/], 3))
		{
			func_99(*iParam1, &Var7);
			if (unk_0x234B68AC2E35ED5A(Var7.f_26, func_157()))
			{
				Var3 = { Var7.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar6;
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_157()
{
	if (func_40(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				return 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				return 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return func_57();
}

int func_158(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	while (iVar6 < 8)
	{
		if (Global_96303[iVar6 /*17*/])
		{
			if (Global_96303[iVar6 /*17*/].f_9 != 263)
			{
				if (unk_0x575B7C28D81C0B4D(Global_31724[Global_96303[iVar6 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { unk_0xB5BBED356C99E704(Global_31724[Global_96303[iVar6 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = SYSTEM::VDIST(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_96303[iVar6 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar6;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_96303[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_159()
{
	if (Global_112293.f_9083)
	{
		Global_77265 = 1;
	}
}

void func_160(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA13444986DC34E90(func_6()))
	{
		unk_0xEB394039A41B68FE(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = unk_0x5E3585E4AFD19C6F(func_6(), 1);
				if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					if (!unk_0x2C10A11A684CFE96(iVar2, Global_111324))
					{
						iVar3 = 0;
						if (!unk_0x9B73EB6255D4AE81(Global_111324, iVar3, 0))
						{
							iVar3 = func_161(&Global_111324);
							if (unk_0x9B73EB6255D4AE81(Global_111324, iVar3, 0))
							{
								unk_0xCA089CD1A17D76DF(iVar2);
								unk_0xB1D85A6C23F2F945(iVar2, Global_111324, iVar3);
							}
						}
						else
						{
							unk_0xCA089CD1A17D76DF(iVar2);
							unk_0xB1D85A6C23F2F945(iVar2, Global_111324, iVar3);
						}
					}
				}
			}
			iVar2 = unk_0x5E3585E4AFD19C6F(func_6(), 0);
			if (!unk_0xECEC7528A52B4EE8(iVar2))
			{
				if (!unk_0x2C10A11A684CFE96(iVar2, Global_111324))
				{
					unk_0xCA089CD1A17D76DF(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!unk_0x9B73EB6255D4AE81(Global_111324, iVar3, 0))
					{
						iVar3 = func_161(&Global_111324);
						if (unk_0x9B73EB6255D4AE81(Global_111324, iVar3, 0))
						{
							unk_0xCA089CD1A17D76DF(iVar2);
							unk_0xB1D85A6C23F2F945(iVar2, Global_111324, iVar3);
						}
					}
					else
					{
						unk_0xCA089CD1A17D76DF(iVar2);
						unk_0xB1D85A6C23F2F945(iVar2, Global_111324, iVar3);
					}
				}
			}
		}
	}
}

int func_161(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(*uParam0, 0))
		{
			if (unk_0x9B73EB6255D4AE81(*uParam0, 0, 0))
			{
				return 0;
			}
			if (unk_0x9B73EB6255D4AE81(*uParam0, 1, 0))
			{
				return 1;
			}
			if (unk_0x9B73EB6255D4AE81(*uParam0, 2, 0))
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_162(int iParam0, int iParam1)
{
	return (unk_0xDFB7BFA6482FEE1E() - iParam0) > iParam1;
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		func_170();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_169(0))
		{
			func_164(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_164(int iParam0)
{
	if (func_168())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_167())
		{
			func_166(1, 1);
		}
		else
		{
			func_166(0, 0);
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
	if (!func_165())
	{
		Global_19798.f_1 = 3;
	}
}

int func_165()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_169(0))
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

bool func_167()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_168()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_169(int iParam0)
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

void func_170()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

void func_171()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
	{
		if (unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
		{
			if (unk_0x8879B2803A5F8682(Global_111324))
			{
				if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3) && !unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
				{
					if (!func_2(Global_111325, -2118855366))
					{
						unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 1, 1000000);
					}
					else
					{
						func_177();
					}
				}
				func_176(&Global_111324, iLocal_992);
			}
			else if (!func_2(Global_111325, -272084098))
			{
				Var0 = { unk_0xD6E677FAD7521410(Global_111324, 1) };
				uVar3 = unk_0xA8D713A937F31250(Global_111324);
				unk_0xE7FD307AF3D07EF7(Global_111325, Global_111324, Var0, uVar3, 3, 60f, 0);
			}
		}
	}
}

void func_172()
{
	int iVar0;
	float fVar1;
	
	if (bLocal_62)
	{
		if (bLocal_63)
		{
			func_123();
			if (unk_0xBFCE58B2B3249999(Global_111324, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(Global_111325))
				{
					if (func_174())
					{
						if (unk_0x4DDAC4C80BACF92C(Global_111324) < 2f)
						{
							if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_111324, 1))
								{
									unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
								}
							}
							unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 24, 5000);
							unk_0x504B26425DFF773C(Global_111325, 1);
							bLocal_67 = true;
							iLocal_952 = 2;
						}
					}
					else if (unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3) || unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
					{
						if (unk_0x24FAD4EF67DE59EB(Global_111325, unk_0x7D2B9E6A64637269()))
						{
							unk_0x880C7B361C9651EE(Global_111325);
						}
						unk_0x4261814A9A26E86F(Global_111325, &cLocal_954, "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_exit", 3))
					{
						unk_0x7F1C9DA5D53192D3(Global_111325, &cLocal_954, "leanover_exit", 1.2f);
						iLocal_92 = unk_0xDFB7BFA6482FEE1E();
						func_176(&Global_111324, iLocal_992);
					}
					else if (!func_2(Global_111325, 242628503))
					{
						if (func_173(&iLocal_92, iLocal_992))
						{
							if (!func_2(Global_111325, -2118855366))
							{
								unk_0x5501AD171E63CFEB(Global_111325, Global_111324, 1, 1000000);
							}
						}
						else
						{
							iLocal_58 = 0;
							if (bLocal_66)
							{
								fVar1 = 25f;
								iVar0 = iLocal_72;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_71;
							}
							unk_0xCA089CD1A17D76DF(Global_111325);
							unk_0x880C7B361C9651EE(Global_111325);
							unk_0xA46C42B60F7890E9(Global_111325, 0.5f);
							unk_0x5C679902079A7E80(&uLocal_815);
							unk_0x81305B339C5AFA4A(0, Global_111324, Global_111331, fVar1, iVar0, 45f);
							unk_0xE7FD307AF3D07EF7(0, Global_111324, Global_111331, Global_111337, iLocal_112, 60f, 1);
							unk_0x1BBD0A5729AB1226(uLocal_815);
							unk_0x8A1AC8EBC73850C8(Global_111325, uLocal_815);
							unk_0x8D5B447F21217223(&uLocal_815);
						}
					}
				}
			}
		}
	}
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_162(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!unk_0xA13444986DC34E90(func_6()))
	{
		*iParam0 = -1;
		return 0;
	}
	unk_0xEB394039A41B68FE(func_6(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = unk_0x5E3585E4AFD19C6F(func_6(), 0);
	if (!unk_0xECEC7528A52B4EE8(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = unk_0x27FC1B0077581B37(Global_111324, iVar6, 0);
		if (unk_0x419E13582192CFEA(iVar2))
		{
			if (iVar2 == unk_0x7D2B9E6A64637269())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (unk_0xC4D136140D260163(iVar3, 167, 0))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, -1794415470))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			unk_0x95CA4545D0C61309(iVar3, Global_111324, 20000, iVar6, 2f, 9437185, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = unk_0x5E3585E4AFD19C6F(func_6(), 1);
		if (!unk_0xECEC7528A52B4EE8(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = unk_0x27FC1B0077581B37(Global_111324, iVar6, 0);
			if (unk_0x419E13582192CFEA(iVar2))
			{
				if (iVar2 == unk_0x7D2B9E6A64637269())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (unk_0xC4D136140D260163(iVar3, 167, 0))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, -1794415470))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				unk_0x95CA4545D0C61309(iVar3, Global_111324, 20000, iVar6, 2f, 9437185, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if ((unk_0x591190E69BE43117(Global_111324, Global_111331, 45f, 45f, 20f, 0, 1, 0) || iLocal_58) || iLocal_951 == 4)
	{
		iLocal_58 = 1;
		if (unk_0x4E8DA737B686529A(Global_111325, 242628503) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_175()
{
	if (bLocal_62)
	{
		if (bLocal_63)
		{
			return 1;
		}
		else if (func_126(&Local_43, &Global_111331, &Global_111337))
		{
			iLocal_105 = 0;
			Local_974 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
			fLocal_85 = SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_111331);
			bLocal_63 = true;
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0xA13444986DC34E90(func_6()))
	{
		unk_0xEB394039A41B68FE(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x5E3585E4AFD19C6F(func_6(), 0);
			if (!unk_0xECEC7528A52B4EE8(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = unk_0x27FC1B0077581B37(*uParam0, iVar5, 0);
				if (unk_0x419E13582192CFEA(iVar3))
				{
					if (iVar3 == unk_0x7D2B9E6A64637269())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (unk_0xC4D136140D260163(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					unk_0x95CA4545D0C61309(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x5E3585E4AFD19C6F(func_6(), 1);
				if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = unk_0x27FC1B0077581B37(*uParam0, iVar5, 0);
					if (unk_0x419E13582192CFEA(iVar3))
					{
						if (iVar3 == unk_0x7D2B9E6A64637269())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (unk_0xC4D136140D260163(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						unk_0x95CA4545D0C61309(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

int func_177()
{
	if (!unk_0xECEC7528A52B4EE8(Global_111325) && unk_0xBFCE58B2B3249999(Global_111324, 0))
	{
		if (unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
		{
			unk_0x068BDE31F7D112BB(&cLocal_954);
			if (unk_0x0EC2B29D4172D225(&cLocal_954))
			{
				if (unk_0x24FAD4EF67DE59EB(Global_111325, unk_0x7D2B9E6A64637269()))
				{
					unk_0x880C7B361C9651EE(Global_111325);
				}
				unk_0x5C679902079A7E80(&uLocal_815);
				unk_0x4261814A9A26E86F(0, &cLocal_954, "leanover_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, &cLocal_954, "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_815);
				unk_0x8A1AC8EBC73850C8(Global_111325, uLocal_815);
				unk_0x8D5B447F21217223(&uLocal_815);
				return 1;
			}
		}
	}
	return 0;
}

int func_178()
{
	if (unk_0x419E13582192CFEA(iLocal_111))
	{
		return 1;
	}
	if (unk_0x419E13582192CFEA(Global_111324))
	{
		if (unk_0xBFCE58B2B3249999(Global_111324, 0))
		{
			iLocal_111 = unk_0x795434E153F90E41(iLocal_110, unk_0xD6E677FAD7521410(Global_111324, 1), 1, 1, 0);
			unk_0x0F1058706D5A58B4(iLocal_111, Global_111324, unk_0xED5AD56E2C551D1E(Global_111324, "Chassis"), Local_986, Local_989, 0, 0, 0, 0, 2, 1);
			unk_0x502E71B1C8F70479(Global_111324, 0);
			if (!unk_0x041B9511CD0AC7F4("taxi"))
			{
				unk_0xDEAC76DD3EF26CF5("taxi", 0);
				unk_0x78CA761D4F0B65D9(unk_0x6471F4759775FCA4(iLocal_111));
			}
			uLocal_95 = unk_0xC7D18C6E194A37FF("taxi");
		}
	}
	return 0;
}

int func_179()
{
	unk_0x16E516CA9C88FF48(iLocal_110);
	uLocal_113 = unk_0x42AA2CCF0B61DCD8("taxi_display");
	uLocal_114 = unk_0x42AA2CCF0B61DCD8("instructional_buttons");
	unk_0x068BDE31F7D112BB(&cLocal_954);
	if (((unk_0xA9C0BBFB9CBB66F1(iLocal_110) && unk_0xDAE4BC89A198A6AF(uLocal_113)) && unk_0xDAE4BC89A198A6AF(uLocal_114)) && unk_0x0EC2B29D4172D225(&cLocal_954))
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	if (!unk_0xBFCE58B2B3249999(Global_111324, 0))
	{
		return;
	}
	if (!unk_0x0E8572B08CEB6A11(uLocal_70))
	{
		if (!func_188() && !func_187(8, -1))
		{
			uLocal_70 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x612434A5544F5847(uLocal_70, Global_111324, Local_980, 1);
			func_184();
			unk_0xF82D990162AFC768(uLocal_70, 1);
		}
	}
	else if (!bLocal_62 || bLocal_61)
	{
		if (!func_188() && !func_187(8, -1))
		{
			if (!unk_0x2671671BBCC6AD9F(uLocal_70))
			{
				func_183(4, 1, -1);
				unk_0xF82D990162AFC768(uLocal_70, 1);
				func_182();
				unk_0x6FA8221C9D2ECB46(uLocal_70, 1);
				unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
				Global_111341 = 1;
				unk_0xB9756A98505CE062(1);
				func_184();
				iLocal_60 = 1;
			}
			else
			{
				func_184();
			}
			unk_0x366E7F593105797F(0, 0, 1);
		}
	}
	else if (unk_0x2671671BBCC6AD9F(uLocal_70))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_70, 0);
		unk_0xDF23DCD7A3E1B7A5(0f);
		unk_0x3A13FD2813C8251F(0f, 1065353216);
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		Global_111341 = 0;
		unk_0xB9756A98505CE062(0);
		unk_0x0471F84E07D156D1();
		unk_0x97D6BA3D63E00279();
		unk_0x3BBBF463E1825A03(0);
		iLocal_60 = 1;
		func_181();
	}
}

void func_181()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_93)
	{
		if (bLocal_62)
		{
			if (Local_43.x == Local_829[iVar0 /*3*/])
			{
				iLocal_94 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x704F8697BB515627(uLocal_113, "HIGHLIGHT_DESTINATION");
	unk_0x9E3D03981E2E9AD9(iLocal_94);
	unk_0x392841D58D2EED1D();
}

void func_182()
{
	struct<3> Var0;
	
	if (unk_0x575B7C28D81C0B4D(Local_43.x))
	{
		Var0 = { unk_0xB5BBED356C99E704(Local_43.x) };
		if (unk_0x0E8572B08CEB6A11(uLocal_70) && unk_0x2671671BBCC6AD9F(uLocal_70))
		{
			unk_0x348FE88799E71EA4(Var0.x, Var0.f_1);
			unk_0x79492A7A520B137D(0);
			unk_0x3BBBF463E1825A03(1400);
		}
	}
}

void func_183(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1379108.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x191DDA30577F440A(&(Global_1379108.f_1046), iParam0);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Global_1379108.f_1046), iParam0);
			}
			break;
	}
}

void func_184()
{
	if (unk_0x0E8572B08CEB6A11(uLocal_70))
	{
		func_185(Global_111324, &uLocal_70, Local_983);
		unk_0xEF20E9A7B745D17A(uLocal_70, fLocal_76);
		unk_0xCD29B8E8A95DC63C(uLocal_70, 0.01f);
		unk_0x28135EF4EFC59AF6(uLocal_70, 1);
		unk_0x0D1A9BA89E57F763(1);
	}
}

void func_185(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		if (unk_0x0E8572B08CEB6A11(*uParam1))
		{
			Var0 = { unk_0x4BB6BF4A85268A22(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_84(unk_0x9E695CE384C77EF0(Global_111324, Param2) - unk_0x9E695CE384C77EF0(Global_111324, Local_980)) };
			func_186(Var6, &uVar3, &uVar4, 1);
			unk_0xBD833AA6EB59C81B(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_186(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0xF0AE30F012D1FD8C(Param0.x, Param0.f_1);
	}
	else if (Param0.x < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((Param0.x * Param0.x) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0xF0AE30F012D1FD8C(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

bool func_187(int iParam0, int iParam1)
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

bool func_188()
{
	return Global_22529;
}

void func_189()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	func_194();
	unk_0x704F8697BB515627(uLocal_113, "CLEAR_TAXI_DISPLAY");
	unk_0x392841D58D2EED1D();
	iVar0 = 0;
	while (iVar0 < iLocal_93)
	{
		if (!unk_0x575B7C28D81C0B4D(Local_829[iVar0 /*3*/]))
		{
		}
		else if (func_129(Local_829[iVar0 /*3*/]) == -1)
		{
		}
		else if (func_133(unk_0xB5BBED356C99E704(Local_829[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
		{
		}
		else
		{
			unk_0x704F8697BB515627(uLocal_113, "ADD_TAXI_DESTINATION");
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x9E3D03981E2E9AD9(unk_0xB20B4DFB7E26761E(Local_829[iVar0 /*3*/]));
			unk_0xB4D5E37C91862216(unk_0x96729F0BA9418850(Local_829[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			unk_0x9E3D03981E2E9AD9(iVar1);
			unk_0x9E3D03981E2E9AD9(iVar2);
			unk_0x9E3D03981E2E9AD9(iVar3);
			iVar8 = func_192(Local_829[iVar0 /*3*/]);
			if (iVar8 == -1)
			{
				unk_0x35CA0C119E6A2A27("STRING");
				unk_0x3B17295029166399(Local_829[iVar0 /*3*/]);
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("STRING");
				unk_0x1896EC0B030A48A2(func_190(iVar8));
				unk_0xD4B2C39F7AD5A6A6();
			}
			if (unk_0xD2B70038FDC7433C(Local_829[iVar0 /*3*/]) == 2)
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(unk_0xFB72730C92FB0683(Local_829[iVar0 /*3*/]))))
				{
					Var5 = { unk_0xD6E677FAD7521410(unk_0xFAA5505029C4B5A6(unk_0xFB72730C92FB0683(Local_829[iVar0 /*3*/])), 1) };
				}
			}
			else if (unk_0xD2B70038FDC7433C(Local_829[iVar0 /*3*/]) == 1)
			{
				if (unk_0xBFCE58B2B3249999(unk_0xFB72730C92FB0683(Local_829[iVar0 /*3*/]), 0))
				{
					Var5 = { unk_0xD6E677FAD7521410(unk_0xFB72730C92FB0683(Local_829[iVar0 /*3*/]), 1) };
				}
			}
			else
			{
				Var5 = { unk_0xB5BBED356C99E704(Local_829[iVar0 /*3*/]) };
			}
			func_70(unk_0x122A00293D3E7167(Var5));
			if (Local_829[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_829[iVar0 /*3*/].f_1 != 0)
				{
					unk_0x35CA0C119E6A2A27("STRTNM1");
					unk_0x36AAC12D537ACD74(Local_829[iVar0 /*3*/].f_1);
					unk_0xD4B2C39F7AD5A6A6();
				}
			}
			else
			{
				unk_0x35CA0C119E6A2A27("STRTNM2");
				unk_0x36AAC12D537ACD74(Local_829[iVar0 /*3*/].f_1);
				unk_0x36AAC12D537ACD74(Local_829[iVar0 /*3*/].f_2);
				unk_0xD4B2C39F7AD5A6A6();
			}
			unk_0x392841D58D2EED1D();
			if (bLocal_62)
			{
				if (Local_43.x == Local_829[iVar0 /*3*/])
				{
					iLocal_94 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_62)
	{
		unk_0x704F8697BB515627(uLocal_113, "SHOW_TAXI_DESTINATION");
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(uLocal_113, "HIGHLIGHT_DESTINATION");
		unk_0x9E3D03981E2E9AD9(iLocal_94);
		unk_0x392841D58D2EED1D();
	}
	else
	{
		unk_0x704F8697BB515627(uLocal_113, "SET_TAXI_PRICE");
		unk_0x9E3D03981E2E9AD9(iLocal_103);
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(uLocal_113, "SHOW_TAXI_DESTINATION");
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(uLocal_113, "HIGHLIGHT_DESTINATION");
		unk_0x9E3D03981E2E9AD9(iLocal_94);
		unk_0x392841D58D2EED1D();
	}
}

char* func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_191(iParam0, 0, 0);
			break;
		
		case 8:
			return func_191(iParam0, 0, 0);
			break;
		
		case 9:
			return func_191(iParam0, 0, 0);
			break;
		
		case 10:
			return func_191(iParam0, 0, 0);
			break;
		
		case 11:
			return func_191(iParam0, 0, 0);
			break;
		
		case 12:
			return func_191(iParam0, 0, 0);
			break;
		
		case 13:
			return func_191(iParam0, 0, 0);
			break;
		
		case 14:
			return func_191(iParam0, 0, 0);
			break;
		
		case 15:
			return func_191(iParam0, 0, 0);
			break;
		
		case 16:
			return func_191(iParam0, 0, 0);
			break;
		
		case 17:
			return func_191(iParam0, 0, 0);
			break;
		
		case 18:
			return func_191(iParam0, 0, 0);
			break;
		
		case 19:
			return func_191(iParam0, 0, 0);
			break;
		
		case 20:
			return func_191(iParam0, 0, 0);
			break;
		
		case 21:
			return func_191(iParam0, 0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_191(iParam0, 0, 0);
			break;
		
		case 40:
			return func_191(iParam0, 0, 0);
			break;
		
		case 41:
			return func_191(iParam0, 0, 0);
			break;
		
		case 42:
			return func_191(iParam0, 0, 0);
			break;
		
		case 43:
			return func_191(iParam0, 0, 0);
			break;
		
		case 44:
			return func_191(iParam0, 0, 0);
			break;
		
		case 45:
			return func_191(iParam0, 0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
		
		case 53:
			return "SB_AMU";
			break;
		
		case 54:
			return "SB_TAT";
			break;
		
		case 55:
			return func_191(iParam0, 0, 0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_191(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B";
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T";
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA";
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 53:
			return "S_G_17";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
		
		case 54:
			return "S_T_07";
			break;
		
		case 55:
			return "S_CL_10";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 56)
	{
		iVar1 = iVar0;
		iVar2 = func_193(iVar1);
		if (Global_31724[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		case 54:
			return 42;
			break;
		
		case 55:
			return 40;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_194()
{
	int iVar0;
	
	iLocal_93 = 0;
	func_211();
	func_198(iLocal_46, 0);
	func_198(iLocal_47, 0);
	func_198(32, 0);
	func_198(143, 0);
	func_198(144, 0);
	func_198(145, 0);
	func_198(146, 0);
	func_198(78, 0);
	func_198(79, 0);
	func_198(88, 0);
	func_198(124, 0);
	func_198(112, 0);
	func_198(123, 0);
	func_198(293, 0);
	func_198(86, 0);
	func_198(77, 0);
	func_198(89, 0);
	func_198(106, 0);
	func_198(108, 0);
	func_198(120, 0);
	func_198(352, 0);
	func_198(107, 0);
	func_198(96, 0);
	func_198(104, 0);
	func_198(105, 0);
	func_198(80, 0);
	func_198(113, 0);
	func_198(118, 0);
	func_198(207, 1);
	func_198(208, 1);
	func_198(209, 1);
	func_198(210, 1);
	func_198(211, 1);
	func_198(212, 1);
	func_198(213, 1);
	func_198(214, 1);
	func_198(321, 1);
	func_198(320, 1);
	func_198(319, 1);
	func_198(322, 1);
	func_198(325, 1);
	func_198(324, 1);
	func_198(349, 1);
	func_198(323, 1);
	func_198(326, 1);
	func_198(317, 1);
	func_198(318, 1);
	func_198(363, 0);
	func_198(355, 0);
	func_198(263, 1);
	func_198(262, 1);
	func_198(267, 1);
	func_198(266, 1);
	func_198(265, 1);
	func_198(400, 0);
	func_198(381, 0);
	func_198(384, 0);
	func_198(382, 0);
	func_198(206, 0);
	func_198(405, 0);
	func_198(385, 0);
	func_198(383, 0);
	func_198(386, 0);
	func_198(387, 0);
	func_198(389, 0);
	func_198(388, 0);
	func_198(149, 0);
	func_198(66, 0);
	func_198(115, 0);
	func_198(114, 0);
	func_198(205, 1);
	func_198(48, 0);
	func_198(40, 1);
	func_198(357, 1);
	func_198(356, 1);
	func_198(359, 1);
	func_198(110, 1);
	func_198(60, 1);
	func_198(41, 1);
	func_198(61, 1);
	func_198(374, 1);
	func_198(375, 1);
	func_198(64, 1);
	func_198(165, 1);
	func_198(166, 1);
	func_198(167, 1);
	func_198(168, 1);
	func_198(169, 1);
	func_198(170, 1);
	func_198(172, 1);
	func_198(280, 1);
	func_198(37, 1);
	func_198(147, 1);
	func_198(62, 0);
	func_198(95, 1);
	func_198(99, 1);
	func_198(102, 1);
	func_198(135, 1);
	func_198(103, 1);
	func_198(90, 1);
	func_198(109, 1);
	func_198(141, 1);
	func_198(136, 1);
	func_198(127, 1);
	func_198(142, 1);
	func_198(38, 1);
	func_198(84, 1);
	func_198(119, 1);
	func_198(121, 1);
	func_198(122, 1);
	func_198(68, 1);
	func_198(126, 1);
	func_198(85, 1);
	func_198(140, 1);
	func_198(197, 1);
	func_198(162, 1);
	func_198(315, 1);
	func_198(71, 1);
	func_198(72, 1);
	func_198(446, 1);
	func_198(225, 1);
	func_198(73, 1);
	func_198(111, 1);
	func_198(75, 1);
	func_198(93, 1);
	func_198(98, 1);
	func_198(117, 1);
	iLocal_96 = func_195();
	iLocal_97 = unk_0xECF99E4700177B8A();
	if (unk_0x16371AB7527A7757())
	{
		if (iLocal_96 == 0)
		{
			if (unk_0x575B7C28D81C0B4D(Global_111328))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (unk_0x575B7C28D81C0B4D(Local_829[iVar0 /*3*/]))
					{
						if (Local_829[iVar0 /*3*/] == Global_111328)
						{
							iLocal_94 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_111328 == 0)
	{
		Global_111328 = 0;
	}
	if (unk_0x16371AB7527A7757())
	{
		if (!Global_111330 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (unk_0x575B7C28D81C0B4D(Local_829[iVar0 /*3*/]))
				{
					if (func_129(Local_829[iVar0 /*3*/]) == Global_111330)
					{
						iLocal_94 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_111330 == -1)
	{
		Global_111330 = -1;
	}
}

int func_195()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x7436C98D25A50C81(iLocal_46);
	while (unk_0x575B7C28D81C0B4D(iVar1))
	{
		if (func_197(iVar1))
		{
			if ((unk_0xD2B70038FDC7433C(iVar1) == 4 || unk_0xD2B70038FDC7433C(iVar1) == 6) || unk_0xD2B70038FDC7433C(iVar1) == 3)
			{
				iVar0++;
			}
			if (unk_0xD2B70038FDC7433C(iVar1) == 2 || unk_0xD2B70038FDC7433C(iVar1) == 1)
			{
				if (func_196(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = unk_0xA4ECE9F9B431271B(iLocal_46);
	}
	iVar1 = unk_0x7436C98D25A50C81(iLocal_47);
	while (unk_0x575B7C28D81C0B4D(iVar1))
	{
		if (func_197(iVar1))
		{
			if (unk_0xD2B70038FDC7433C(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = unk_0xA4ECE9F9B431271B(iLocal_47);
	}
	return iVar0;
}

int func_196(int iParam0)
{
	if (((unk_0x96729F0BA9418850(iParam0) == 9 || unk_0x96729F0BA9418850(iParam0) == 11) || unk_0x96729F0BA9418850(iParam0) == 10) || unk_0x96729F0BA9418850(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (unk_0x575B7C28D81C0B4D(iParam0))
	{
		iVar0 = unk_0xA53484CF24F59ADF(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_198(int iParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar4 = unk_0x7436C98D25A50C81(iParam0);
	iVar5 = 20;
	while (unk_0x575B7C28D81C0B4D(iVar4))
	{
		if (iLocal_100 >= iVar5)
		{
			SYSTEM::WAIT(0);
			iLocal_100 = 0;
			if (!func_231())
			{
				func_239(1);
			}
			func_184();
			func_226();
			func_225();
		}
		if (iLocal_93 < 40)
		{
			if (func_197(iVar4))
			{
				if (func_210(iVar4))
				{
					if (!func_208(&iVar4))
					{
						bVar3 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case joaat("mpsv_lp0_31"):
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 446:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar3 = true;
								break;
							
							case 363:
								iVar7 = func_207(&iVar4);
								if (((iVar7 == 33 || iVar7 == 92) || iVar7 == 89) || iVar7 == 88)
								{
									bVar3 = false;
								}
								else
								{
									bVar3 = true;
								}
								break;
							
							default:
								bVar3 = false;
								if (iParam0 == iLocal_47)
								{
									bVar3 = true;
								}
								else if (iParam0 == iLocal_46)
								{
									if (func_206(&iVar4))
									{
										bVar3 = true;
									}
								}
								break;
						}
						if (unk_0x575B7C28D81C0B4D(Global_111327))
						{
							if (func_129(iVar4) == iLocal_46)
							{
								if (!Global_111327 == iVar4)
								{
									bVar3 = false;
								}
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_197(iVar4))
							{
								iVar6 = unk_0xD2B70038FDC7433C(iVar4);
								if (((iVar6 == 4 || iVar6 == 5) || iVar6 == 2) || iVar6 == 1)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								func_205(&iVar4, &Var0);
								func_199(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_100++;
		iVar4 = unk_0xA4ECE9F9B431271B(iParam0);
	}
}

void func_199(struct<3> Param0, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_129(Param0.x) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_129(Local_829[iVar0 /*3*/]) == func_129(Param0.x))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_93)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_93)
		{
			if (func_129(Local_829[iVar0 /*3*/]) == func_129(Param0.x))
			{
				if (func_203(Param0, Local_829[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_202(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_200(Param0, iVar0);
						iLocal_93++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_200(Param0, iVar0);
				iLocal_93++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_200(Param0, iVar0);
			iLocal_93++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_200(struct<3> Param0, int iParam3)
{
	func_201(iParam3);
	Local_829[iParam3 /*3*/] = { Param0 };
	if (func_129(Local_829[iParam3 /*3*/]) == unk_0x7EA43B6762051EA2())
	{
		iLocal_99 = iParam3;
		Local_977 = { unk_0xB5BBED356C99E704(Local_829[iParam3 /*3*/]) };
	}
}

void func_201(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_829[(iVar0 - 1) /*3*/] };
		Local_829[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_99)
		{
			iLocal_99 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_202(struct<3> Param0, int iParam3)
{
	Local_829[iParam3 /*3*/] = { Param0 };
	if (func_129(Local_829[iParam3 /*3*/]) == unk_0x7EA43B6762051EA2())
	{
		iLocal_99 = iParam3;
		Local_977 = { unk_0xB5BBED356C99E704(Local_829[iParam3 /*3*/]) };
	}
}

int func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_204(uParam0) < func_204(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_204(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x575B7C28D81C0B4D(uParam0))
		{
			Var0 = { func_49(iParam0) - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		}
	}
	return SYSTEM::VMAG(Var0);
}

void func_205(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_111329)
	{
		Var0 = { func_49(*uParam1) };
		unk_0x2ECFC62169E31C4B(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		unk_0x2ECFC62169E31C4B(Global_111331, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_206(var uParam0)
{
	int iVar0;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		iVar0 = unk_0x96729F0BA9418850(*uParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_207(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_96303[iVar0 /*17*/])
		{
			if (Global_96303[iVar0 /*17*/].f_9 != 263)
			{
				if (unk_0x575B7C28D81C0B4D(Global_31724[Global_96303[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_31724[Global_96303[iVar0 /*17*/].f_9 /*23*/].f_19 == *uParam0)
					{
						return Global_96303[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_208(var uParam0)
{
	if (!unk_0x575B7C28D81C0B4D(*uParam0))
	{
		return 1;
	}
	if (Global_111326 == *uParam0)
	{
		return 1;
	}
	if (unk_0xFBC6C2D539FEBE5D(*uParam0) == 39)
	{
		return 1;
	}
	if (func_209(unk_0xB5BBED356C99E704(*uParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_129(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

bool func_209(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_210(var uParam0)
{
	float fVar0;
	
	if (!func_129(uParam0) == iLocal_46)
	{
		fVar0 = func_204(uParam0);
		if (fVar0 > 50f)
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

void func_211()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_829[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_93 = 0;
	iLocal_99 = -1;
	Local_977 = { 0f, 0f, 0f };
	iLocal_100 = 0;
}

bool func_212()
{
	bool bVar0;
	struct<3> Var1;
	var uVar4;
	
	bVar0 = false;
	if (!unk_0x575B7C28D81C0B4D(Local_829[iLocal_94 /*3*/]))
	{
		if (iLocal_94 != iLocal_99)
		{
			return 1;
		}
	}
	if (SYSTEM::TIMERB() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_97 != unk_0xECF99E4700177B8A())
			{
				bVar0 = true;
			}
			iLocal_97 = unk_0xECF99E4700177B8A();
			if (iLocal_98 != func_213())
			{
				bVar0 = true;
			}
			iLocal_98 = func_213();
		}
		if (!bVar0)
		{
			if (iLocal_99 != -1)
			{
				if (unk_0x575B7C28D81C0B4D(Local_829[iLocal_99 /*3*/]))
				{
					if (func_129(Local_829[iLocal_99 /*3*/]) == unk_0x7EA43B6762051EA2())
					{
						Var1 = { unk_0xB5BBED356C99E704(Local_829[iLocal_99 /*3*/]) };
						if (!func_133(Var1, Local_977, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					uVar4 = unk_0x7436C98D25A50C81(unk_0x7EA43B6762051EA2());
					if (unk_0x575B7C28D81C0B4D(uVar4))
					{
						Var1 = { unk_0xB5BBED356C99E704(iVar4) };
						if (!func_133(Var1, Local_977, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
	return bVar0;
}

int func_213()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_111324))
	{
		if (!unk_0x9B73EB6255D4AE81(Global_111324, -1, 0))
		{
			iVar0++;
		}
		if (!unk_0x9B73EB6255D4AE81(Global_111324, 0, 0))
		{
			iVar0++;
		}
		if (!unk_0x9B73EB6255D4AE81(Global_111324, 1, 0))
		{
			iVar0++;
		}
		if (!unk_0x9B73EB6255D4AE81(Global_111324, 2, 0))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_214()
{
	if (iLocal_951 != 0)
	{
		unk_0x27DA7E2B98AB7899(uLocal_95);
		unk_0x0F33095580A670CE(4);
		unk_0x51D19921B47902B3(1);
		if (unk_0xBFCE58B2B3249999(Global_111324, 0))
		{
			unk_0x43D93129BD1AD792(uLocal_113, fLocal_88, fLocal_89, fLocal_86, fLocal_87, 0, 0, 0, 255, 0);
		}
	}
}

void func_215()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_951 != 0)
	{
		if (iLocal_93 > 1)
		{
			func_220(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0x0D901EFDFD7EF9D5(2))
			{
				unk_0x203739B163D4D88E(2, 241);
				unk_0x203739B163D4D88E(2, 242);
				unk_0x203739B163D4D88E(2, 180);
				unk_0x203739B163D4D88E(2, 181);
			}
			if (iVar0 > 28 || unk_0x96DF114B59E81B9C(2, 180))
			{
				if (!iLocal_64)
				{
					if (bLocal_62)
					{
						if (bLocal_61)
						{
							func_219();
						}
						else
						{
							iLocal_60 = 1;
						}
						bLocal_61 = true;
					}
					else
					{
						func_219();
					}
					iLocal_106 = unk_0xDFB7BFA6482FEE1E();
					iLocal_64 = 1;
				}
			}
			else
			{
				iLocal_64 = 0;
			}
			if (iVar0 < -28 || unk_0x86AF801D34E482FF(2, 181))
			{
				if (!iLocal_65)
				{
					if (bLocal_62)
					{
						if (bLocal_61)
						{
							func_217();
						}
						else
						{
							iLocal_60 = 1;
						}
						bLocal_61 = true;
					}
					else
					{
						func_217();
					}
					iLocal_106 = unk_0xDFB7BFA6482FEE1E();
					iLocal_65 = 1;
				}
			}
			else
			{
				iLocal_65 = 0;
			}
		}
		if (!bLocal_62)
		{
			if (iLocal_93 > 0)
			{
				unk_0xD6ABECE3CBB224B0(0);
				if (unk_0x86AF801D34E482FF(2, 176))
				{
					if (unk_0x575B7C28D81C0B4D(Local_829[iLocal_94 /*3*/]))
					{
						iLocal_828 = 2;
						Local_43 = { Local_829[iLocal_94 /*3*/] };
						iLocal_58 = 0;
						iLocal_92 = unk_0xDFB7BFA6482FEE1E();
						iLocal_101 = unk_0xDFB7BFA6482FEE1E();
						iLocal_102 = unk_0xDFB7BFA6482FEE1E();
						iLocal_90 = 0;
						iLocal_950 = 0;
						bLocal_62 = true;
						iLocal_60 = 1;
						bLocal_61 = false;
					}
				}
			}
		}
		else
		{
			unk_0xD6ABECE3CBB224B0(0);
			if (iLocal_951 == 2)
			{
				if (unk_0x86AF801D34E482FF(2, 177))
				{
					iLocal_828 = 13;
					iLocal_60 = 1;
					if (!unk_0xECEC7528A52B4EE8(Global_111325))
					{
						unk_0xCA089CD1A17D76DF(Global_111325);
					}
					iLocal_951 = 3;
				}
				if (!bLocal_66)
				{
					if (unk_0x86AF801D34E482FF(2, 179))
					{
						iLocal_828 = 20;
						bLocal_66 = true;
						iLocal_60 = 1;
						fLocal_75 = (0.22f * 2f);
						if (!unk_0xECEC7528A52B4EE8(Global_111325))
						{
							if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3))
							{
								if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
								{
									if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_exit", 3))
									{
										unk_0xCA089CD1A17D76DF(Global_111325);
									}
								}
							}
						}
					}
				}
				if (func_76())
				{
					if (unk_0x86AF801D34E482FF(2, 176))
					{
						if (bLocal_63)
						{
							iLocal_60 = 1;
							iLocal_91 = unk_0xDFB7BFA6482FEE1E();
							iLocal_953 = 0;
							iLocal_951 = 4;
						}
					}
				}
				if (iLocal_828 == 0)
				{
					if (iLocal_101 != -1)
					{
						if (func_162(iLocal_101, 68000))
						{
							iLocal_828 = 4;
							iLocal_101 = -1;
						}
					}
				}
				if (iLocal_828 == 0)
				{
					if (iLocal_102 != -1)
					{
						if (func_162(iLocal_102, 5000))
						{
							if ((unk_0x5C6675393464A814(2, 81) || unk_0x5C6675393464A814(2, 82)) || unk_0x5C6675393464A814(2, 85))
							{
								iLocal_828 = 17;
								iLocal_101 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_951 == 3)
			{
				if (unk_0x86AF801D34E482FF(2, 177))
				{
					iLocal_828 = 3;
					iLocal_60 = 1;
					iLocal_951 = 2;
				}
			}
			if (bLocal_61)
			{
				if (func_216())
				{
					if (unk_0x86AF801D34E482FF(2, 176))
					{
						if (unk_0x575B7C28D81C0B4D(Local_829[iLocal_94 /*3*/]))
						{
							iLocal_828 = 9;
							bLocal_63 = false;
							if (iLocal_951 == 3)
							{
								iLocal_951 = 2;
							}
							iLocal_60 = 1;
							Local_43 = { Local_829[iLocal_94 /*3*/] };
							iLocal_58 = 0;
							iLocal_92 = unk_0xDFB7BFA6482FEE1E();
							iLocal_90 = 0;
							iLocal_950 = 0;
							if (!unk_0xECEC7528A52B4EE8(Global_111325))
							{
								if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3))
								{
									if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
									{
										if (!unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_exit", 3))
										{
											unk_0xCA089CD1A17D76DF(Global_111325);
										}
									}
								}
							}
							iLocal_106 = unk_0xDFB7BFA6482FEE1E();
							bLocal_61 = false;
						}
					}
					if (func_162(iLocal_106, 3000))
					{
						bLocal_61 = false;
					}
				}
			}
		}
	}
}

int func_216()
{
	if (unk_0x0E8572B08CEB6A11(uLocal_70))
	{
		if (unk_0x2671671BBCC6AD9F(uLocal_70))
		{
			return 1;
		}
	}
	if (bLocal_61)
	{
		return 1;
	}
	return 0;
}

void func_217()
{
	struct<3> Var0;
	
	unk_0x704F8697BB515627(uLocal_113, "SET_INPUT_EVENT");
	unk_0x9E3D03981E2E9AD9(8);
	unk_0x392841D58D2EED1D();
	iLocal_94 = (iLocal_94 - 1);
	if (iLocal_94 < 0)
	{
		iLocal_94 = (iLocal_93 - 1);
	}
	if (unk_0x575B7C28D81C0B4D(Local_829[iLocal_94 /*3*/]))
	{
		Var0 = { unk_0xB5BBED356C99E704(Local_829[iLocal_94 /*3*/]) };
		if (!func_218(Var0))
		{
			unk_0x348FE88799E71EA4(Var0.x, Var0.f_1);
		}
	}
}

int func_218(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	struct<3> Var0;
	
	unk_0x704F8697BB515627(uLocal_113, "SET_INPUT_EVENT");
	unk_0x9E3D03981E2E9AD9(9);
	unk_0x392841D58D2EED1D();
	iLocal_94++;
	if (iLocal_94 > (iLocal_93 - 1))
	{
		iLocal_94 = 0;
	}
	if (unk_0x575B7C28D81C0B4D(Local_829[iLocal_94 /*3*/]))
	{
		Var0 = { unk_0xB5BBED356C99E704(Local_829[iLocal_94 /*3*/]) };
		if (!func_218(Var0))
		{
			unk_0x348FE88799E71EA4(Var0.x, Var0.f_1);
		}
	}
}

void func_220(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((unk_0xBDAD193FD6CC54F5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0xBDAD193FD6CC54F5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0xBDAD193FD6CC54F5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0xBDAD193FD6CC54F5(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0xC40DD87705E0DB63(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0xC40DD87705E0DB63(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0xC40DD87705E0DB63(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0xC40DD87705E0DB63(2, 221) * 127f));
		}
	}
}

int func_221()
{
	if (iLocal_951 == 4)
	{
		return 1;
	}
	if (func_223())
	{
		return 1;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 1;
	}
	if (func_222())
	{
		return 1;
	}
	if (func_187(8, -1))
	{
		return 1;
	}
	if (func_169(0))
	{
		return 1;
	}
	if (unk_0xC1FCB6CC23926AD5())
	{
		return 1;
	}
	if (func_188())
	{
		return 1;
	}
	if (Global_77508 || Global_77509)
	{
		return 1;
	}
	return 0;
}

bool func_222()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

bool func_223()
{
	return Global_74428;
}

void func_224()
{
	if (!Global_111329 == 0)
	{
		if (!unk_0x575B7C28D81C0B4D(Global_111329))
		{
			Global_111329 = 0;
		}
	}
}

void func_225()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
		unk_0xC8ADE97D5EA74CC8(unk_0x1146A9AE09CE2B14());
		unk_0x65C6DBC40481CB81(unk_0x1146A9AE09CE2B14(), 2);
		unk_0x65C6DBC40481CB81(unk_0x1146A9AE09CE2B14(), 3);
		unk_0x65C6DBC40481CB81(unk_0x1146A9AE09CE2B14(), 4);
		unk_0x65C6DBC40481CB81(unk_0x1146A9AE09CE2B14(), 5);
		unk_0x65C6DBC40481CB81(unk_0x1146A9AE09CE2B14(), 15);
	}
}

void func_226()
{
	unk_0xB5D61F76D4980A55(0);
	unk_0xB5D61F76D4980A55(1);
	unk_0xB5D61F76D4980A55(2);
	unk_0x366E7F593105797F(0, 99, 1);
	unk_0x366E7F593105797F(0, 100, 1);
	unk_0x366E7F593105797F(0, 16, 1);
	unk_0x366E7F593105797F(0, 17, 1);
	unk_0x366E7F593105797F(0, 73, 1);
	unk_0x366E7F593105797F(0, 25, 1);
	func_227();
	unk_0x366E7F593105797F(0, 200, 1);
	if (func_223() || func_169(0))
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
}

void func_227()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

int func_228()
{
	int iVar0;
	
	if (Global_111325 == 0)
	{
		return 0;
	}
	if (!unk_0xECEC7528A52B4EE8(Global_111325))
	{
		if (unk_0xBFCE58B2B3249999(Global_111324, 0))
		{
			if (!unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
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
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
			{
				if (func_229(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
				{
					iVar0 = unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0);
					if (!iVar0 == unk_0x7D2B9E6A64637269())
					{
						if (!unk_0xECEC7528A52B4EE8(iVar0))
						{
							Global_111340 = 1;
							unk_0x58DF9C9B7E628ADD(unk_0x1146A9AE09CE2B14(), 0);
							unk_0xEFD424FDD55A6EC7(2);
							unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
							return 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x0E8572B08CEB6A11(uLocal_70))
	{
		if (unk_0x2671671BBCC6AD9F(uLocal_70))
		{
			unk_0xB9756A98505CE062(0);
			Global_111341 = 0;
		}
		unk_0x6FA8221C9D2ECB46(uLocal_70, 0);
		unk_0xFE1DEC9C5734D0C0(uLocal_70, 0);
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		unk_0x0471F84E07D156D1();
		unk_0x97D6BA3D63E00279();
		unk_0x3BBBF463E1825A03(0);
	}
	return 0;
}

int func_229(var uParam0)
{
	if (unk_0xEACFC87E44438F24(uParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 1;
	}
	if (func_60(unk_0x7D2B9E6A64637269()) != iLocal_73)
	{
		return 1;
	}
	if (!unk_0x419E13582192CFEA(Global_111324))
	{
		return 1;
	}
	if (!unk_0xBFCE58B2B3249999(Global_111324, 0))
	{
		return 1;
	}
	if (!unk_0x419E13582192CFEA(Global_111325))
	{
		return 1;
	}
	if (unk_0xECEC7528A52B4EE8(Global_111325))
	{
		return 1;
	}
	if (iLocal_951 != 4)
	{
		if (iParam0 == 1)
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
			{
				return 1;
			}
			if (((unk_0x0D628BB90DA6214A(Global_111324, 2, 30000) || unk_0x0D628BB90DA6214A(Global_111324, 3, 30000)) || unk_0x0D628BB90DA6214A(Global_111324, 0, 7000)) || unk_0x0D628BB90DA6214A(Global_111324, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { unk_0xD6E677FAD7521410(Global_111324, 0) };
		if (unk_0x3E72EB0926A107F9(Var0, 7f, 0))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.x = (Var4.x - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.x = (Var7.x + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (unk_0xD7196DD041C06559(Var4, Var7, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_231()
{
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (Global_96290 == 1)
	{
		return 0;
	}
	if (unk_0x2CA4B93E310C1860())
	{
		return 0;
	}
	if (Global_111344)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (unk_0x8875237855302F87())
	{
		return 0;
	}
	return 1;
}

int func_232()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		iLocal_97 = unk_0xECF99E4700177B8A();
		if (func_236(&uVar0, func_238(), func_237()))
		{
			iVar1 = unk_0x27FC1B0077581B37(uVar0, -1, 0);
			func_224();
			unk_0x58DF9C9B7E628ADD(unk_0x1146A9AE09CE2B14(), 0);
			unk_0xEFD424FDD55A6EC7(2);
			unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
			if (unk_0x27FC1B0077581B37(uVar0, 1, 0) == unk_0x7D2B9E6A64637269())
			{
				iLocal_992 = 1;
			}
			else
			{
				iLocal_992 = 2;
			}
			if (func_234(&uVar0, &iVar1, 1))
			{
				Local_971 = { unk_0xD6E677FAD7521410(Global_111324, 1) - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				Local_971.f_2 = 0f;
				fLocal_74 = SYSTEM::VMAG(Local_971);
				iLocal_73 = func_60(unk_0x7D2B9E6A64637269());
				func_233();
				iLocal_98 = func_213();
				iLocal_60 = 1;
				unk_0x366E7F593105797F(0, 75, 1);
				Global_111340 = 1;
				iLocal_951 = 0;
				iLocal_952 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_233()
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(Global_111324, 0))
	{
		if (!unk_0x9B73EB6255D4AE81(Global_111324, 1, 0))
		{
			iVar0 = unk_0x27FC1B0077581B37(Global_111324, 1, 0);
			if (unk_0x7D2B9E6A64637269() != iVar0)
			{
				if (!unk_0xAB3E7E62A69D0DB3(iVar0, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
				{
					unk_0x1DC2BF231DE6A016(iVar0, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
				}
			}
		}
		if (!unk_0x9B73EB6255D4AE81(Global_111324, 2, 0))
		{
			iVar0 = unk_0x27FC1B0077581B37(Global_111324, 2, 0);
			if (unk_0x7D2B9E6A64637269() != iVar0)
			{
				if (!unk_0xAB3E7E62A69D0DB3(iVar0, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
				{
					unk_0x1DC2BF231DE6A016(iVar0, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_234(var uParam0, int iParam1, bool bParam2)
{
	if (!*uParam0 == Global_111324 && !Global_111324 == 0)
	{
		func_235();
	}
	if (unk_0x419E13582192CFEA(*uParam0) && unk_0x419E13582192CFEA(*iParam1))
	{
		if (unk_0xBFCE58B2B3249999(*uParam0, 0))
		{
			if (!unk_0xECEC7528A52B4EE8(*iParam1))
			{
				if (unk_0x2C10A11A684CFE96(*iParam1, *uParam0))
				{
					Global_111324 = *uParam0;
					Global_111325 = *iParam1;
					Global_111339 = 1;
					if (bParam2)
					{
						unk_0x4985CD0720AFD468(Global_111325, 1, 1);
						unk_0x4985CD0720AFD468(Global_111324, 1, 1);
						StringCopy(&Global_111355, unk_0x471C98FD94C0A5FD(), 24);
					}
					else
					{
						if (!unk_0xEE1D92A39CF8E1E6(Global_111325))
						{
							unk_0x4985CD0720AFD468(Global_111325, 1, 0);
						}
						if (!unk_0xEE1D92A39CF8E1E6(Global_111324))
						{
							unk_0x4985CD0720AFD468(Global_111324, 1, 0);
							StringCopy(&Global_111355, unk_0x471C98FD94C0A5FD(), 24);
						}
					}
					unk_0x7B28A83A0D3DD0F9(Global_111325, 251, 1);
					unk_0xA415F00D0E0DFBCE(Global_111325, 5, 0);
					unk_0xA415F00D0E0DFBCE(Global_111325, 17, 1);
					unk_0x82D2BB48A39F1E88(Global_111325, 512, 0);
					unk_0xBE91B077ADADE97F(Global_111325, 1);
					unk_0x90517F1BF9113FB8(Global_111325, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x5C052A30B9FCA449(Global_111324, 1);
					unk_0x914FE6C4D25C2ABA(Global_111324, 1);
					unk_0x410F7E904016F85F(Global_111324, 0, 0);
					unk_0x276AD30F7ADB253C(Global_111324, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_235()
{
	var uVar0;
	
	if (unk_0x419E13582192CFEA(Global_111325))
	{
		if (!unk_0xECEC7528A52B4EE8(Global_111325))
		{
			unk_0x7B28A83A0D3DD0F9(Global_111325, 251, 0);
			unk_0xBE91B077ADADE97F(Global_111325, 0);
			if (!unk_0x11DBA82F76F3C4C2(Global_111325) && !unk_0x3D28F4F0775C6C2A(Global_111325, 0))
			{
				if (unk_0xC49311A2A500FF09(Global_111325, 0))
				{
					if (unk_0x419E13582192CFEA(Global_111324))
					{
						if (unk_0xBFCE58B2B3249999(Global_111324, 0))
						{
							if (unk_0x2C10A11A684CFE96(Global_111325, Global_111324))
							{
								if (unk_0x4E8DA737B686529A(Global_111325, -258271821) != 1 && unk_0x4E8DA737B686529A(Global_111325, -258271821) != 0)
								{
									unk_0x5C679902079A7E80(&uVar0);
									if ((!unk_0x9B73EB6255D4AE81(Global_111324, 1, 0) || !unk_0x9B73EB6255D4AE81(Global_111324, 2, 0)) || !unk_0x9B73EB6255D4AE81(Global_111324, 0, 0))
									{
										unk_0xC85977CD781454AC(0, 2000);
									}
									else
									{
										unk_0xC85977CD781454AC(0, 500);
									}
									unk_0x0509CE092AC81B7C(0, Global_111324, 12f, 790699);
									unk_0x1BBD0A5729AB1226(uVar0);
									unk_0x8A1AC8EBC73850C8(Global_111325, uVar0);
									unk_0x8D5B447F21217223(&uVar0);
								}
							}
							else
							{
								unk_0x1DC2BF231DE6A016(Global_111325, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0x1DC2BF231DE6A016(Global_111325, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 0);
						}
					}
				}
				else if (unk_0x4E8DA737B686529A(Global_111325, -1146898486) != 1 && unk_0x4E8DA737B686529A(Global_111325, -1146898486) != 0)
				{
					unk_0x4B770B4D8C1A469B(Global_111325, 1193033728, 0);
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(Global_111325))
	{
		if (unk_0xEE1D92A39CF8E1E6(Global_111325))
		{
			if (unk_0x9984C023D4E57C2E(Global_111325, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(Global_111325))
				{
					unk_0x46EDFC827DC67D89(Global_111325, 0, 1);
					unk_0xBE91B077ADADE97F(Global_111325, 0);
				}
				unk_0x0F3BD19FF11738D3(&Global_111325);
			}
		}
	}
	if (unk_0x419E13582192CFEA(Global_111324))
	{
		if (unk_0xEE1D92A39CF8E1E6(Global_111324))
		{
			if (unk_0x9984C023D4E57C2E(Global_111324, 0))
			{
				if (unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					unk_0x914FE6C4D25C2ABA(Global_111324, 0);
					unk_0x410F7E904016F85F(Global_111324, 1, 0);
					unk_0x276AD30F7ADB253C(Global_111324, 0);
				}
				unk_0x795957CD3A0042C8(&Global_111324);
			}
		}
	}
	Global_111325 = 0;
	Global_111324 = 0;
	StringCopy(&Global_111355, "NULL", 24);
	Global_111361 = -1;
}

int func_236(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (unk_0xBFCE58B2B3249999(*uParam0, 0))
		{
			if (unk_0x6471F4759775FCA4(*uParam0) == iParam1)
			{
				iVar0 = unk_0x27FC1B0077581B37(*uParam0, -1, 0);
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xECEC7528A52B4EE8(iVar0))
					{
						if (!unk_0x11DBA82F76F3C4C2(iVar0))
						{
							if (!unk_0x3D28F4F0775C6C2A(iVar0, 0))
							{
								if (unk_0x20799DE10C73159E(iVar0, uParam2))
								{
									if (unk_0x1595C3E8842A8F45(*uParam0, 1119092736))
									{
										iVar1 = unk_0xAFD2714E8B5AEB9F(*uParam0);
										if (iVar1 != 3 && iVar1 != 2)
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_237()
{
	return joaat("a_m_y_stlat_01");
}

int func_238()
{
	return joaat("taxi");
}

void func_239(bool bParam0)
{
	unk_0xD6ABECE3CBB224B0(1);
	if (unk_0x041B9511CD0AC7F4("taxi"))
	{
		unk_0x85EFAD0D44058E0C("taxi");
	}
	if (unk_0x0E8572B08CEB6A11(uLocal_70))
	{
		if (unk_0x2671671BBCC6AD9F(uLocal_70))
		{
			unk_0xB9756A98505CE062(0);
		}
		unk_0x6FA8221C9D2ECB46(uLocal_70, 0);
		unk_0xFE1DEC9C5734D0C0(uLocal_70, 0);
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		unk_0x0471F84E07D156D1();
		unk_0x97D6BA3D63E00279();
		unk_0x3BBBF463E1825A03(0);
	}
	Global_111341 = 0;
	if (unk_0x419E13582192CFEA(iLocal_111))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_111);
		unk_0x824F744352C8BC82(iLocal_110);
	}
	unk_0x3D9BC07C93913E04(&uLocal_113);
	unk_0x3D9BC07C93913E04(&uLocal_114);
	if (func_240(Global_111325))
	{
		if (unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_enter", 3))
		{
			unk_0x971223096C6B5513(Global_111325, "leanover_enter", &cLocal_954, -2f);
		}
		else if (unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_idle", 3))
		{
			unk_0x971223096C6B5513(Global_111325, "leanover_idle", &cLocal_954, -2f);
		}
		else if (unk_0x698F51FB33ADAF7B(Global_111325, &cLocal_954, "leanover_exit", 3))
		{
			unk_0x971223096C6B5513(Global_111325, "leanover_exit", &cLocal_954, -2f);
		}
		if (unk_0x24FAD4EF67DE59EB(Global_111325, unk_0x7D2B9E6A64637269()))
		{
			unk_0x880C7B361C9651EE(Global_111325);
		}
	}
	unk_0xF9135F131C423364(&cLocal_954);
	if (iLocal_951 == 4)
	{
		if (iLocal_953 != 10)
		{
			if (iLocal_59)
			{
				if (unk_0xCE84F8AB9BD41C13())
				{
					unk_0xED93DAC36CA89AF2();
				}
				iLocal_59 = 0;
			}
			func_163(0);
			if (unk_0xB30CD10E2CD1B67D("FADE_OUT_WORLD_250MS_SCENE"))
			{
				unk_0xC0BBE340BE2AA02D("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (unk_0x419E13582192CFEA(Global_111324))
			{
				if (unk_0xBFCE58B2B3249999(Global_111324, 0))
				{
					unk_0x32051C1124051B7B(Global_111324, 1);
					unk_0xA2C015B68CE01357(Global_111324, 0);
				}
			}
			if (bParam0)
			{
				if (unk_0x8B6A925F148E0E94() || unk_0x4E38E404B98F3D9A())
				{
					if (!unk_0x07BE48DF95787FCB())
					{
						if ((!func_82() && !func_8()) && Global_99370 != 10)
						{
							unk_0x6E1E3A5B1F9AB95B(250);
						}
					}
				}
			}
		}
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_3(Global_111324))
		{
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_111324, 1))
			{
				if (unk_0x27FC1B0077581B37(Global_111324, -1, 0) != unk_0x7D2B9E6A64637269())
				{
					if (!func_2(unk_0x7D2B9E6A64637269(), -828834893) && !func_2(unk_0x7D2B9E6A64637269(), 451360105))
					{
						unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_235();
	Global_111361 = -1;
	Global_111340 = 0;
	Global_111344 = 0;
	unk_0x4BFE89D21F9885DC();
}

int func_240(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (!unk_0xECEC7528A52B4EE8(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

