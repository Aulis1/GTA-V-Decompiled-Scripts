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
	struct<3> Local_45[8];
	struct<3> Local_70[1];
	int iLocal_74 = 0;
	int iLocal_75[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_82[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<165> Local_96 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_272[16] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	char cLocal_276[16] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	struct<3> Local_280[12];
	char cLocal_317[32] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 1132396544;
	var uLocal_328 = 1132396544;
	var uLocal_329 = 1132396544;
	var uLocal_330 = 0;
	var uLocal_331 = -1082130432;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 8;
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
	var uLocal_391 = -1;
	var uLocal_392 = 1092616192;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	bool bLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1000;
	var uLocal_409 = 1000;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 1097859072;
	var uLocal_415 = 1500;
	var uLocal_416 = 45;
	var uLocal_417 = 1103626240;
	var uLocal_418 = 5;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	bool bLocal_427 = 0;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	struct<3> Local_437 = { 0, 0, 0 } ;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	int iLocal_443 = 0;
	bool bLocal_444 = 0;
	int iLocal_445 = 0;
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
	int iLocal_457 = 0;
	var uLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	bool bLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	bool bLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	bool bLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	int iLocal_476 = 0;
	struct<6> Local_477 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_483 = NULL;
	var uLocal_484 = 16;
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
	int iLocal_649 = 0;
	struct<23> Local_650[53];
	struct<28> Local_1870[17];
	var uLocal_2347 = 0;
	struct<165> Local_2348 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	struct<3> Local_2531 = { 0, 0, 0 } ;
	float fLocal_2534 = 0f;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	struct<18> Local_2556[2];
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	float fLocal_2600 = 0f;
	int iLocal_2601 = 0;
	bool bLocal_2602 = 0;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	int iLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	char* sLocal_2618 = NULL;
	char* sLocal_2619 = NULL;
	char* sLocal_2620[3] = { NULL, NULL, NULL };
	char* sLocal_2624 = NULL;
	struct<3> Local_2625[1];
	struct<3> Local_2629 = { 0, 0, 0 } ;
	struct<3> Local_2632 = { 0, 0, 0 } ;
	struct<3> Local_2635 = { 0, 0, 0 } ;
	var uLocal_2638 = 9;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 7;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 15;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 1;
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	int iLocal_2934 = 0;
	bool bLocal_2935 = 0;
	bool bLocal_2936 = 0;
	int iLocal_2937 = 0;
	int iLocal_2938 = 0;
	bool bLocal_2939 = 0;
	bool bLocal_2940 = 0;
	int iLocal_2941 = 0;
	bool bLocal_2942 = 0;
	bool bLocal_2943 = 0;
	var uLocal_2944 = 0;
	bool bLocal_2945 = 0;
	int iLocal_2946 = 0;
	int iLocal_2947 = 0;
	bool bLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	int iLocal_2953 = 0;
	int iLocal_2954 = 0;
	var uLocal_2955 = 0;
	bool bLocal_2956 = 0;
	bool bLocal_2957 = 0;
	bool bLocal_2958 = 0;
	bool bLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	int iLocal_2962 = 0;
	int iLocal_2963 = 0;
	bool bLocal_2964 = 0;
	bool bLocal_2965 = 0;
	bool bLocal_2966 = 0;
	int iLocal_2967 = 0;
	bool bLocal_2968 = 0;
	var uLocal_2969 = 0;
	bool bLocal_2970 = 0;
	bool bLocal_2971 = 0;
	int iLocal_2972 = 0;
	bool bLocal_2973 = 0;
	int iLocal_2974 = 0;
	int iLocal_2975 = 0;
	int iLocal_2976 = 0;
	int iLocal_2977 = 0;
	int iLocal_2978 = 0;
	bool bLocal_2979 = 0;
	var uLocal_2980[2] = { 0, 0 };
	int iLocal_2983 = 0;
	int iLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	int iLocal_2987[1] = { 0 };
	var uLocal_2989[2] = { 0, 0 };
	int iLocal_2992 = 0;
	struct<2> Local_2993 = { 0, 0 } ;
	var uLocal_2995 = 0;
	struct<20> Local_2996[1];
	struct<7> Local_3017 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	int iLocal_3040 = 0;
	int iLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	int iLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	int iLocal_3050 = 0;
	int iLocal_3051 = 0;
	int iLocal_3052 = 0;
	int iLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	struct<3> Local_3060 = { 0, 0, 0 } ;
	struct<3> Local_3063 = { 0, 0, 0 } ;
	float fLocal_3066 = 0f;
	float fLocal_3067 = 0f;
	char cLocal_3068[64] = "";
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	int iLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	int iLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	char* sLocal_3114 = NULL;
	int iLocal_3115 = 0;
	var uLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	int iLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 8;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	int iLocal_3136 = 0;
	bool bLocal_3137 = 0;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	
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
	Local_93 = { 500f, 500f, 500f };
	fLocal_428 = 0f;
	fLocal_429 = 0f;
	fLocal_430 = 0f;
	fLocal_431 = 0.8f;
	fLocal_432 = 1.5f;
	fLocal_433 = 0.5f;
	Local_437 = { 401.55f, -1631.309f, 29.3f };
	iLocal_440 = 1;
	iLocal_441 = 1;
	iLocal_649 = joaat("towtruck");
	Local_2531 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2534 = 275.5635f;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	fLocal_2600 = 0f;
	sLocal_2618 = "";
	sLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2931 = 1;
	iLocal_2932 = 1;
	iLocal_2933 = 1;
	iLocal_2941 = 1;
	iLocal_2976 = 1;
	iLocal_3037 = -1;
	Local_3060 = { -229.8159f, -1172f, 21.8557f };
	iLocal_3115 = 1;
	unk_0xC189FA1CE4E3B2A5(1);
	if (unk_0x4210287E2833D44B(67))
	{
		if (!func_302())
		{
			func_300(&Global_110944, 3);
			func_271(unk_0x471C98FD94C0A5FD());
		}
		func_267();
	}
	if (unk_0x419E13582192CFEA(ScriptParam_0) && unk_0x419E13582192CFEA(ScriptParam_0.f_1))
	{
		if (!unk_0xE50EB54E0F21BED0(ScriptParam_0, 0) && !unk_0xE50EB54E0F21BED0(ScriptParam_0.f_1, 0))
		{
			unk_0x4985CD0720AFD468(ScriptParam_0, 1, 1);
			unk_0x4985CD0720AFD468(ScriptParam_0.f_1, 1, 1);
		}
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 0);
	}
	func_266(&Local_650);
	func_265(&Local_1870);
	func_264();
	iVar0 = 0;
	func_263(&uLocal_3091);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_420 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2604 = iVar0;
				}
				else
				{
					iLocal_2604 = func_262(100000f, iLocal_420, Global_112293.f_19971.f_9);
				}
			}
			else
			{
				if (Global_112293.f_19971.f_3 == 0)
				{
					bLocal_2959 = true;
				}
				if (!func_261())
				{
					func_258();
				}
				else
				{
					iLocal_2604 = Global_112293.f_19971.f_9;
					iLocal_420 = Global_112293.f_19971.f_2;
				}
				ScriptParam_0.f_3 = iLocal_420;
			}
			iLocal_2992 = 0;
			break;
	}
	if (!bLocal_2959)
	{
		func_257(&Local_2348, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_420 == 0)
	{
		iLocal_2962 = 1;
		if ((Global_112293.f_19971.f_6 % 2) == 0)
		{
			bLocal_2965 = true;
		}
	}
	else if (iLocal_420 == 2)
	{
		bLocal_2966 = true;
		iLocal_2962 = 1;
	}
	if (iLocal_420 == 3 || iLocal_420 == 1)
	{
		iLocal_2961 = 1;
		iLocal_2962 = 1;
		iLocal_3051 = 1;
	}
	else if (iLocal_420 == 4)
	{
		iLocal_2962 = 1;
		iLocal_3051 = Local_1870[func_256() /*28*/].f_27;
	}
	func_255();
	func_231(&ScriptParam_0);
	if (Global_112293.f_19971.f_3 >= 5)
	{
		bLocal_2945 = true;
		bLocal_2945 = bLocal_2945;
	}
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iLocal_3109 = ScriptParam_0.f_1;
			uVar1 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x419E13582192CFEA(uVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
			{
				if (unk_0x6471F4759775FCA4(iVar1) == joaat("towtruck") || unk_0x6471F4759775FCA4(iVar1) == joaat("towtruck2"))
				{
					iLocal_3109 = iVar1;
				}
			}
		}
	}
	unk_0xD6ABECE3CBB224B0(0);
	unk_0x5E84945E26CAEF1F(0.2f);
	if (unk_0x419E13582192CFEA(iLocal_3109))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
		{
			unk_0x4985CD0720AFD468(iLocal_3109, 1, 1);
			unk_0xD3B638D46BF908EE(iLocal_3109);
			unk_0x0D8475829632C03A(iLocal_3109, 0);
			unk_0xD4DF29F3D7B97053(iLocal_3109, 1);
		}
	}
	uLocal_3112 = unk_0x0823FA7465392E20(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_3113 = unk_0x0823FA7465392E20(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	unk_0x86DA8A407ED8A381(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 0, 1);
	unk_0x016587321D096AED(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 0);
	func_230();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_226(&uLocal_2656);
		func_225();
		unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
		if (bLocal_2945 && !unk_0xD2D71C54782FDE2A(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x8B6A925F148E0E94())
			{
				unk_0xA08B79ACC38AAA7A(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!unk_0xABE4F4FD4329B037())
				{
					SYSTEM::WAIT(0);
				}
				unk_0xED93DAC36CA89AF2();
				unk_0xDF23DCD7A3E1B7A5(0);
				unk_0x3A13FD2813C8251F(0, 1065353216);
				unk_0xB7D390F8F682127B(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, 0, 0);
				unk_0x6E1E3A5B1F9AB95B(500);
			}
		}
		if (iLocal_3115 < 15)
		{
			func_223(&iLocal_3109, &uLocal_2985, &Local_2996, &Local_2625, &cLocal_3068, &iLocal_3052, iLocal_3047, bLocal_2958, &iLocal_2967, iLocal_2949, bLocal_2939, bLocal_461, iLocal_3115, 1);
		}
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			switch (iLocal_2992)
			{
				case 0:
					if (iLocal_3115 > 4 && iLocal_3115 < 15)
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3109, 0))
						{
						}
						if (iLocal_420 != 2 && iLocal_420 != 4)
						{
							if (!func_220(&uLocal_3122, Local_2996[0 /*20*/].f_6, iLocal_3109, &uLocal_3042, &uLocal_3043, bLocal_2945))
							{
								iLocal_3084 = 15;
								func_267();
							}
						}
						if (bLocal_2959 || uLocal_2955)
						{
							func_219(&uLocal_3123, iLocal_3109, &uLocal_3045, &uLocal_3046, bLocal_2945);
						}
					}
					if (bLocal_2959)
					{
						if (iLocal_3115 >= 7)
						{
							func_214(iLocal_3109, Local_2996[0 /*20*/].f_6, Local_3017, &(Local_2996[0 /*20*/].f_8), &Local_2625, &cLocal_3068, &Local_437, bLocal_2959, &(Local_2996[0 /*20*/]));
						}
					}
					bLocal_2948 = false;
					if (((iLocal_420 == 0 || iLocal_420 == 2) && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (bLocal_2965 && iLocal_2976)
						{
							func_212();
							func_211(Local_2996[0 /*20*/].f_6, Local_2996[0 /*20*/]);
						}
						if (!bLocal_2959)
						{
							func_200();
						}
					}
					else if ((iLocal_420 == 1 && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (func_196())
						{
							func_193();
						}
						if (iLocal_3119 > 0)
						{
							func_189();
						}
					}
					else if (iLocal_420 == 3)
					{
						if ((iLocal_3115 == 5 && iLocal_3117 < 1) && !iLocal_2930)
						{
							if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
							{
								if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), Local_2996[0 /*20*/].f_6))
								{
									iLocal_2930 = 1;
									unk_0xCA089CD1A17D76DF(Local_2996[0 /*20*/]);
									unk_0xB0C1A43193C25F7A(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 0);
								}
							}
						}
					}
					if (iLocal_2950 && !bLocal_442)
					{
						func_185(&(Local_1870[func_256() /*28*/]), &(Local_1870[func_256() /*28*/].f_10), Local_650[iLocal_2604 /*23*/].f_1, &(Local_2996[0 /*20*/]), &(Local_2996[0 /*20*/].f_2), &uLocal_2989, fLocal_3066, sLocal_2619, &sLocal_2620, iLocal_3051);
					}
					if (iLocal_420 == 4)
					{
						func_183(&uLocal_3116, iLocal_3110, iLocal_3111, iLocal_3109, &(Local_2996[0 /*20*/].f_2), iLocal_3051, sLocal_2619, &sLocal_2620, &iLocal_2984, bLocal_2945, &(Local_2996[0 /*20*/].f_6));
					}
					if (!bLocal_2945)
					{
						if (unk_0x419E13582192CFEA(iLocal_2984) && !unk_0xE50EB54E0F21BED0(iLocal_2984, 0))
						{
							if (func_175(iLocal_2984, 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
							{
								bLocal_2942 = true;
								unk_0x1DC2BF231DE6A016(iLocal_2984, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
							}
							if (func_173())
							{
								bLocal_2943 = true;
							}
						}
					}
					if (bLocal_442 && !bLocal_2964)
					{
						if (func_175(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, &uLocal_412, &iLocal_419, 0, 1, 1, 1, 0))
						{
							func_172();
							if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
							{
								unk_0xCA089CD1A17D76DF(Local_2996[0 /*20*/]);
								unk_0x504B26425DFF773C(Local_2996[0 /*20*/], 1);
								unk_0x1DC2BF231DE6A016(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
							if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_1, 0))
							{
								unk_0xCA089CD1A17D76DF(Local_2996[0 /*20*/].f_1);
								unk_0x504B26425DFF773C(Local_2996[0 /*20*/].f_1, 1);
								unk_0x8D5B447F21217223(&uLocal_421);
								unk_0x5C679902079A7E80(&uLocal_421);
								unk_0xCC5ED49CF9C9215F(0, 1, 256);
								unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
								unk_0x1BBD0A5729AB1226(uLocal_421);
								if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_1, 0))
								{
									unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/].f_1, uLocal_421);
								}
								unk_0x8D5B447F21217223(&uLocal_421);
								iLocal_3084 = 18;
							}
							if (!bLocal_2959)
							{
								switch (iLocal_419)
								{
									case 16:
										if (iLocal_420 == 2)
										{
											iLocal_3084 = 17;
											func_267();
										}
										else
										{
											iLocal_3084 = 16;
											func_267();
										}
										break;
									
									case 2:
										func_171(&Local_2348, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3084 = 3;
										func_267();
										break;
								}
							}
							else
							{
								iLocal_3084 = 21;
								func_267();
							}
							if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
							{
								func_267();
							}
						}
						if (func_175(Local_2996[0 /*20*/].f_1, Local_2996[0 /*20*/].f_6, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
						{
							func_172();
							if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_1, 0))
							{
								unk_0xCA089CD1A17D76DF(Local_2996[0 /*20*/].f_1);
								unk_0x504B26425DFF773C(Local_2996[0 /*20*/].f_1, 1);
								unk_0x1DC2BF231DE6A016(Local_2996[0 /*20*/].f_1, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
						}
					}
					else if (bLocal_2964)
					{
					}
					if (!bLocal_2948 && func_170(0))
					{
						if ((!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(iLocal_3109, 0)) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_3109, 0))
						{
							if (!iLocal_468)
							{
								if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_6))
								{
									if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
									{
										func_147(&uLocal_399, unk_0xD6E677FAD7521410(Local_2996[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_147(&uLocal_399, Local_2629, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_170(0))
					{
						func_146(&uLocal_399, 0, 0);
					}
					func_144(&uLocal_3094, 7f, 1);
					func_143();
					func_142();
					if (((!bLocal_467 || iLocal_3115 >= 15) || uLocal_2944) || bLocal_2939)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_3115 == 9)
					{
						if (iLocal_420 == 1 || iLocal_420 == 3)
						{
							func_13(Local_2348, &Local_2996, &iLocal_3109);
						}
					}
					break;
			}
			if (func_1(ScriptParam_0))
			{
				func_267();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_2970)
	{
		iLocal_3084 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_3084 = 11;
		return 1;
	}
	if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_6))
	{
		if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
		{
			if (unk_0x0D628BB90DA6214A(Local_2996[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_3084 = 15;
				return 1;
			}
		}
	}
	if (bLocal_467)
	{
		if ((unk_0xDFB7BFA6482FEE1E() - iLocal_3052) > 50000)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			if (unk_0x419E13582192CFEA(iLocal_3109) && !unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
			{
				Var3 = { unk_0xD6E677FAD7521410(iLocal_3109, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 625f)
			{
				iLocal_3084 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2942)
	{
		iLocal_3084 = 22;
		return 1;
	}
	if (bLocal_2943)
	{
		iLocal_3084 = 23;
		return 1;
	}
	if (unk_0x419E13582192CFEA(iLocal_3109))
	{
		if (!unk_0xBFCE58B2B3249999(iLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return 1;
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_3109))
	{
		if (unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_3115 > 4 && iLocal_3115 < 17)
			{
				if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_6))
				{
					if (unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
					{
						iLocal_3084 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_442)
					{
						if (!bLocal_2964)
						{
							if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/]))
							{
								if (unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
								{
									iLocal_3084 = 8;
									return 1;
								}
							}
						}
						if (bLocal_2965)
						{
							if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_1))
							{
								if (unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_1, 0))
								{
									iLocal_3084 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
	{
		iLocal_3084 = 3;
		return 1;
	}
	if (!unk_0x966155156C573F75(iLocal_3109))
	{
		unk_0xD3B638D46BF908EE(iLocal_3109);
	}
	else if (unk_0x14048B1C509BDE11(iLocal_3109))
	{
		iLocal_3084 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_2951)
	{
		if (func_3(&uLocal_3100, 180f))
		{
			iLocal_2951 = 1;
			func_171(&Local_2348, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_3100, 300f))
	{
		if (iLocal_420 != 2)
		{
			iLocal_3084 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_7(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_420 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3115 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(Local_2625[0 /*3*/]))
	{
		if (!iLocal_2952)
		{
			if (func_9(Local_2625[0 /*3*/], 0) > (fLocal_430 + 400f))
			{
				func_171(&Local_2348, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2952 = 1;
			}
		}
		if (func_9(Local_2625[0 /*3*/], 0) > (fLocal_430 + 450f))
		{
			iLocal_3084 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, int iParam3)
{
	return func_10(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), Param0, iParam3);
}

float func_10(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), Param1, iParam4);
}

int func_11(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_99422.f_363 > 0;
}

void func_13(struct<165> Param0, int iParam165, int iParam166)
{
	if (!iLocal_463)
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (iLocal_2605 > 1)
			{
				if (func_48(iParam165, iParam166))
				{
					if (func_47())
					{
						Local_477 = { func_46() };
						func_44();
						iLocal_463 = 1;
						iLocal_2605 = 3;
					}
					else
					{
						iLocal_463 = 1;
						iLocal_2605 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2605)
	{
		case 0:
			if (!func_47())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2605 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && iLocal_468) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_257(&Param0, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					if (unk_0x636F1F53CC61D2C9(joaat("tonya3")) == 1 || unk_0x636F1F53CC61D2C9(joaat("tonya4")) == 1)
					{
						if (iLocal_420 == 1)
						{
							func_171(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_483 = "TOW_TRN_C1";
						}
						else if (iLocal_420 == 3)
						{
							func_171(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_C";
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 1)
					{
						if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
						{
							func_257(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_483 = "TOW_MECH";
						}
						else if (Global_112293.f_19971.f_5 == 2)
						{
							func_257(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_483 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam165);
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 3)
					{
						if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
						{
							func_257(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_CONV";
						}
						else if (Global_112293.f_19971.f_7 == 2)
						{
							func_257(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam165);
						}
						bLocal_464 = true;
					}
				}
				else if (func_39(sLocal_483))
				{
					iLocal_2605 = 2;
				}
			}
			break;
		
		case 3:
			func_38(Param0, iParam165);
			if (iLocal_465)
			{
				iLocal_2605 = 2;
			}
			break;
		
		case 2:
			if (func_37(iParam166))
			{
				if (bLocal_464)
				{
					if (iLocal_463)
					{
						if (!func_47())
						{
							if (func_14(&Local_2348, "TOWAUD", sLocal_483, &Local_477, 8, 0, 0))
							{
								iLocal_463 = 0;
								iLocal_2605 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_37(iParam166);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 1;
	StringCopy(&Global_22129, sParam3, 24);
	Global_2621441 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					func_35();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_33();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_21();
		func_16();
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
		func_35();
	}
	return 0;
}

void func_16()
{
	if (!func_17())
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

int func_17()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_20())
	{
		return 0;
	}
	if (func_18(unk_0x1146A9AE09CE2B14()))
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

bool func_18(int iParam0)
{
	return func_19(iParam0, 20);
}

bool func_19(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_20()
{
	return -1;
}

void func_21()
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

void func_22()
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

int func_23()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
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

void func_25()
{
	if (func_32(14))
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
		Global_19798 = func_26();
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

int func_26()
{
	func_27();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_27()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_30(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_29(unk_0x7D2B9E6A64637269());
			if (func_28(iVar0) && (!func_32(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_28(Global_112293.f_2361.f_539.f_4321))
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

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_32(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_33()
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

bool func_34(int iParam0, int iParam1)
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

void func_35()
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

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
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

int func_37(var uParam0)
{
	switch (iLocal_2606)
	{
		case 1:
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0 && !unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
			{
				iLocal_465 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(*uParam0, 0))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *uParam0, 0))
				{
					iLocal_465 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_2606)
	{
		case 1:
			if (unk_0x636F1F53CC61D2C9(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0x884D6C481876A0F1(unk_0x1146A9AE09CE2B14());
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0x884D6C481876A0F1(unk_0x1146A9AE09CE2B14());
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_7 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x636F1F53CC61D2C9(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_7 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x636F1F53CC61D2C9(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_7 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x636F1F53CC61D2C9(joaat("towing")) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_7 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_39(char* sParam0)
{
	var uVar0;
	
	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (unk_0xDA654EB115F9FF7D(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_40()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		return Global_20744;
	}
	return Var0;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0xB36B8558948EA7A8(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_483 = "TOW_GEN_MCH2";
}

bool func_43(char* sParam0, int iParam1, int iParam2)
{
	unk_0x40542ED8EFC7D2D7(sParam0);
	if (iParam1 == 1)
	{
		unk_0x1896EC0B030A48A2(iParam2);
	}
	return unk_0xB4BAEA083E2652CB();
}

void func_44()
{
	Global_19991 = 0;
	func_45();
}

void func_45()
{
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0xBA3738C78262143F();
		Global_22136 = 0;
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

struct<6> func_46()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		iVar6 = unk_0x9618CA3AB2A82C04();
		iVar6 = (iVar6 + Global_22135);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar7 /*6*/])))
			{
				return Global_19993[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar8 /*6*/])))
					{
						return Global_19993[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19993[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_47()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)
{
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0 || unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xDF70785EF230F74E(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x884D6C481876A0F1(unk_0x1146A9AE09CE2B14());
		}
		iLocal_2606 = 1;
		return 1;
	}
	if ((unk_0x419E13582192CFEA((uParam0[0 /*20*/])->f_6) && !unk_0xE50EB54E0F21BED0((uParam0[0 /*20*/])->f_6, 0)) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!bLocal_427)
		{
			if ((unk_0xA6E8FBD68548675F((uParam0[0 /*20*/])->f_6, unk_0x7D2B9E6A64637269(), 1) || unk_0xC6FB16A6BCF56FEE((uParam0[0 /*20*/])->f_6)) || unk_0x4E37ACBE6D599CB9((uParam0[0 /*20*/])->f_6))
			{
				iLocal_2606 = 2;
				return 1;
			}
		}
	}
	if ((unk_0x419E13582192CFEA((*uParam0)[0 /*20*/]) && !unk_0xE50EB54E0F21BED0((*uParam0)[0 /*20*/], 0)) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xA6E8FBD68548675F(unk_0x7D2B9E6A64637269(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_2606 = 4;
			return 1;
		}
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(*uParam1, 0))
	{
		if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *uParam1, 0))
		{
			iLocal_2606 = 6;
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	func_53(&Global_110944, 3);
	func_300(&(Global_112293.f_19971.f_1), 8192);
	func_50();
	func_193();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
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

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_55()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar6;
	var uVar9;
	
	switch (iLocal_3115)
	{
		case 1:
			func_141(14);
			if (iLocal_420 == 3)
			{
				if (func_139(&Local_3063, &fLocal_3066, &uLocal_3054, &uLocal_3057))
				{
					iLocal_3115 = 2;
				}
			}
			else
			{
				iLocal_3115 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x123480158F10FA67())
			{
				switch (iLocal_420)
				{
					case 3:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 2:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 0:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2965)
						{
							if (func_171(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3115 = 4;
							}
						}
						else if (func_171(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 1:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 4:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_420)
			{
				case 3:
					if (func_132("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
						{
							unk_0x5C052A30B9FCA449(Local_2996[0 /*20*/].f_6, 10);
						}
						func_130();
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 2:
					if (func_132("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2632 = { (Local_2625[0 /*3*/] + 15f), (Local_2625[0 /*3*/].f_1 + 15f), (Local_2625[0 /*3*/].f_2 + 15f) };
						Local_2635 = { (Local_2625[0 /*3*/] - 15f), (Local_2625[0 /*3*/].f_1 - 15f), (Local_2625[0 /*3*/].f_2 - 15f) };
						unk_0x86DA8A407ED8A381(Local_2632, Local_2635, 0, 1);
						iLocal_2963 = 1;
						unk_0x84AD61D029E3B23C(Local_2996[0 /*20*/].f_6, 1);
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 0:
					if (func_132("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 1:
					if (func_132("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0x84AD61D029E3B23C(Local_2996[0 /*20*/].f_6, 1);
						func_130();
						unk_0xB2B2B460EE75764E(0);
						func_129(0, 0);
						func_129(1, 0);
						func_129(2, 0);
						func_129(3, 0);
						func_129(4, 0);
						func_129(5, 0);
						func_129(6, 0);
						func_129(7, 0);
						func_129(8, 0);
						func_129(9, 0);
						func_129(10, 0);
						func_129(11, 0);
						iLocal_2960 = 1;
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 4:
					if (func_132("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0x84AD61D029E3B23C(Local_2996[0 /*20*/].f_6, 1);
						func_130();
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_8))
			{
				if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_6))
				{
					Local_2996[0 /*20*/].f_8 = unk_0xB20BB447C131B310(Local_2996[0 /*20*/].f_6);
					unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_8, 3);
					unk_0x13CC211F9F7ACE7F(Local_2996[0 /*20*/].f_8, 1);
				}
			}
			break;
		
		case 5:
			func_124();
			if (func_116(&iLocal_3117, 0, "TOW_BREAK1"))
			{
				iLocal_3115 = 7;
			}
			break;
		
		case 6:
			if (!func_47())
			{
				func_115(sLocal_3114, 7500, 1);
				StringCopy(&cLocal_3068, sLocal_3114, 64);
				if (iLocal_420 == 3)
				{
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_2629))
					{
						Local_2629 = { Local_70[0 /*3*/] };
					}
					func_114(8, &Local_3017);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_420 == 1 && !unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], iLocal_3109, 0))
			{
				bLocal_2957 = true;
			}
			func_113();
			if (func_106(sVar2, Local_2629))
			{
				if (iLocal_420 == 1 && !unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], iLocal_3109, 0))
				{
					bLocal_2957 = false;
					iLocal_2953 = 1;
					if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/]))
					{
						Local_2996[0 /*20*/].f_9 = unk_0xB20BB447C131B310(Local_2996[0 /*20*/]);
						unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_9, 3);
						unk_0xDD205B87CDFD0C1B(Local_2996[0 /*20*/].f_9, 0.7f);
					}
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 9;
				}
			}
			if (func_104(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2935 = true;
				iLocal_3115 = 9;
			}
			break;
		
		case 9:
			if (iLocal_420 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_103(sVar2))
			{
				func_146(&uLocal_399, 0, 0);
				unk_0x410F7E904016F85F(Local_2996[0 /*20*/].f_6, 0, 0);
				if (iLocal_3038 == 0)
				{
					iLocal_2941 = 0;
					iLocal_3115 = 15;
				}
				else
				{
					func_115("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3068, "TOWT_OBJ_05", 64);
					iLocal_3115 = 7;
				}
			}
			break;
		
		case 15:
			func_102();
			if (bLocal_2939)
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_2985))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_2985);
				}
			}
			unk_0x66AE54CE92457FEE(1);
			fLocal_429 = (fLocal_429 + 500f);
			if (iLocal_470 != 0 && !bLocal_2935)
			{
				if (bLocal_2945)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - iLocal_470) < 12000)
					{
						fLocal_429 = (fLocal_429 + 50f);
					}
				}
			}
			if (!bLocal_2945)
			{
				fLocal_429 = 0f;
			}
			fLocal_3067 = func_4(&uLocal_3091);
			fLocal_3067 = (fLocal_3067 * 1000f);
			iVar1 = SYSTEM::ROUND(fLocal_3067);
			unk_0xCD3872DF8178C437(iVar1, 14, 0);
			if (iLocal_420 != 2)
			{
			}
			if (bLocal_2945)
			{
				fLocal_429 = (fLocal_429 - fLocal_428);
			}
			iLocal_472 = SYSTEM::ROUND(fLocal_429);
			func_101(&uLocal_2608, "TOW_UI07", 500, SYSTEM::ROUND(fLocal_428), SYSTEM::ROUND(fLocal_429), "TOW_UI08", 4000, 1);
			if (iLocal_472 > 0)
			{
				func_62(0, iLocal_472);
			}
			func_61(1);
			iLocal_3115 = 16;
			break;
		
		case 16:
			if (unk_0x9B8D025C6C2200C5())
			{
				unk_0x66AE54CE92457FEE(1);
			}
			if (!func_56(&uLocal_2608, 0))
			{
				unk_0xAA18C87A1A6C1FAE("TOW_TUT_04A");
				unk_0xAA18C87A1A6C1FAE("TOWT_OBJ_03Ga");
				iLocal_3115 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_70[0 /*3*/] = { Local_70[0 /*3*/] };
	return 0;
}

int func_56(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_59(&(uParam0->f_2));
	}
	unk_0xEFD424FDD55A6EC7(14);
	unk_0x44EF5678D6916481(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x86AF801D34E482FF(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_59(&(uParam0->f_5));
				func_58(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_4(&(uParam0->f_5)) > 0.33f)
			{
				func_57(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_59(&(uParam0->f_5));
			func_58(uParam0, 1051260355);
		}
		else if (func_4(&(uParam0->f_5)) > 0.33f)
		{
			func_57(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0, int iParam1)
{
	unk_0x704F8697BB515627(*uParam0, "SHARD_ANIM_OUT");
	unk_0x9E3D03981E2E9AD9(uParam0->f_9);
	unk_0x82D42F43BE26EB72(iParam1);
	unk_0x392841D58D2EED1D();
}

void func_59(var uParam0)
{
	func_60(uParam0, 0f);
}

void func_60(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_61(bool bParam0)
{
	char* sVar0;
	
	unk_0x9783B77820E7F699(0);
	switch (func_26())
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
	unk_0x3DF34AABABC07A1C(sVar0);
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	func_64(Global_112293.f_24902[iParam0 /*4*/], func_100(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_112293.f_24902.f_69 = (Global_112293.f_24902.f_69 + iParam1);
			break;
		
		case 2:
			Global_112293.f_24902.f_70 = (Global_112293.f_24902.f_70 + iParam1);
			break;
		
		case 0:
			Global_112293.f_24902.f_71 = (Global_112293.f_24902.f_71 + iParam1);
			break;
	}
	unk_0xD885BEFA31A18D47(func_63(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(func_63(iParam0, 1), iVar0, 1);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_99(iParam0) == 3)
	{
		return;
	}
	if (func_99(iParam0) == 4)
	{
		return;
	}
	func_65(func_99(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xD885BEFA31A18D47(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xAC4FD27671081628(iVar1, iVar0, 1);
	}
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_98();
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
					func_97(99, 1);
					func_96(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_96(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_96(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_96(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_96(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_property"), iParam3);
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
									func_96(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_97(95, iParam3);
					break;
				
				case 1:
					func_97(97, iParam3);
					break;
				
				case 2:
					func_97(96, iParam3);
					break;
			}
			func_97(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
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
					func_96(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_96(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_96(joaat("sp2_total_cash_earned"), iParam3);
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
	func_67(iParam0);
	if (Global_42009 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
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

void func_67(int iParam0)
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

void func_68(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_74(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_74(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_74(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_74(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_71(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_71(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_71(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_71(8276, 0, -1, 1, 0);
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
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_70() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_70() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_69(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(int iParam0)
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

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1312763;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_73();
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

void func_75(int iParam0)
{
	func_97(93, iParam0);
	func_97(29, iParam0);
	func_97(30, iParam0);
}

bool func_76(int iParam0)
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
		return func_78(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_77(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_77(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_77(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_77(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_77(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_77(8276, -1, 0);
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
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_70() /*5557*/].f_675.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_73();
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

int func_81(bool bParam0)
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
		func_95(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_32(14) && !func_94(iParam0))
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
	if (func_93(&Global_4272779))
	{
		if (func_91(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4272779, iParam0))
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

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4272778 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
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

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_97(int iParam0, int iParam1)
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

void func_98()
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

int func_99(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_101(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0x704F8697BB515627(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xB2A9BDF905DC5A51(iParam7);
	unk_0x1896EC0B030A48A2(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x35CA0C119E6A2A27(sParam5);
	unk_0x38CD3C04C877C35F(iParam2);
	unk_0x38CD3C04C877C35F(iParam3);
	unk_0x38CD3C04C877C35F(iParam4);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x392841D58D2EED1D();
	func_59(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

void func_102()
{
	Global_112293.f_19971.f_3++;
	Global_112293.f_19971.f_2 = iLocal_420;
	switch (iLocal_420)
	{
		case 2:
			Global_112293.f_19971.f_4++;
			break;
		
		case 3:
			Global_112293.f_19971.f_7++;
			break;
		
		case 0:
			Global_112293.f_19971.f_6++;
			break;
		
		case 1:
			Global_112293.f_19971.f_5++;
			break;
		
		case 4:
			Global_112293.f_19971.f_8++;
			break;
	}
}

int func_103(char* sParam0)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar7;
	
	if (iLocal_3037 == -1)
	{
	}
	if (Local_2996[iLocal_3037 /*20*/].f_15)
	{
		if ((func_4(&(Local_2996[iLocal_3037 /*20*/].f_11)) - Local_2996[iLocal_3037 /*20*/].f_14) > 120f)
		{
			unk_0xF4C21F6414CF1653(Local_2996[iLocal_3037 /*20*/].f_6, 1, 0);
		}
	}
	if (func_104(&uVar0, &uVar3, &uVar6))
	{
		if (!unk_0xE50EB54E0F21BED0(Local_2996[iLocal_3037 /*20*/], 0) && unk_0xF41EB7643E61A928(Local_2996[iLocal_3037 /*20*/], iLocal_3109, 0))
		{
			unk_0x101C61FF49B27BB8(iLocal_3109, 6f, 2, 0);
			iLocal_466 = 1;
			if (unk_0x419E13582192CFEA(Local_2996[iLocal_3037 /*20*/]) && !unk_0xE50EB54E0F21BED0(Local_2996[iLocal_3037 /*20*/], 0))
			{
				unk_0x5C679902079A7E80(&uLocal_421);
				unk_0x880C7B361C9651EE(0);
				unk_0xCC5ED49CF9C9215F(0, 0, 0);
				unk_0x1BA17238F2579830(0, Local_2996[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (unk_0xB36B8558948EA7A8(0, 65535) % 3);
				if (iVar7 == 0)
				{
					unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar7 == 1)
				{
					unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar7 == 2)
				{
					unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				unk_0x1BBD0A5729AB1226(uLocal_421);
				unk_0x8A1AC8EBC73850C8(Local_2996[iLocal_3037 /*20*/], uLocal_421);
				unk_0x8D5B447F21217223(&uLocal_421);
				unk_0x504B26425DFF773C(Local_2996[iLocal_3037 /*20*/], 1);
			}
			if ((Global_112293.f_19971.f_3 == 0 || Global_112293.f_19971.f_3 == 1) || Global_112293.f_19971.f_3 == 4)
			{
				if (unk_0x419E13582192CFEA(iLocal_2984) && !unk_0xE50EB54E0F21BED0(iLocal_2984, 0))
				{
					unk_0x5C679902079A7E80(&uLocal_421);
					unk_0xCC5ED49CF9C9215F(0, 0, 0);
					unk_0x4B770B4D8C1A469B(0, 227.082f, 0);
					unk_0x1BBD0A5729AB1226(uLocal_421);
					if (!unk_0xE50EB54E0F21BED0(iLocal_2984, 0))
					{
						unk_0x8A1AC8EBC73850C8(iLocal_2984, uLocal_421);
						unk_0x504B26425DFF773C(iLocal_2984, 1);
					}
					unk_0x8D5B447F21217223(&uLocal_421);
				}
			}
			if (func_47())
			{
				func_172();
			}
			if ((Global_112293.f_19971.f_3 == 0 || Global_112293.f_19971.f_3 == 1) || Global_112293.f_19971.f_3 == 4)
			{
				if (Global_112293.f_19971.f_3 == 0)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_112293.f_19971.f_3 == 1)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_112293.f_19971.f_3 == 4)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_112293.f_19971.f_7 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2959)
		{
		}
		iLocal_468 = 0;
		unk_0x1AD5BCFEC31BB8D9(&(Local_2996[iLocal_3037 /*20*/].f_8));
		func_59(&uLocal_3088);
		iLocal_3038 = (iLocal_3038 - 1);
		return 1;
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[iLocal_3037 /*20*/].f_6, 0))
	{
		if (!unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6))
		{
			iLocal_468 = 0;
			func_146(&uLocal_399, 0, 0);
			unk_0x13CC211F9F7ACE7F(Local_2996[iLocal_3037 /*20*/].f_8, 0);
			unk_0x1AD5BCFEC31BB8D9(&(Local_2996[iLocal_3037 /*20*/].f_8));
			if (unk_0x419E13582192CFEA(Local_2996[iLocal_3037 /*20*/].f_6) && !unk_0xE50EB54E0F21BED0(Local_2996[iLocal_3037 /*20*/].f_6, 0))
			{
				if (!unk_0x575B7C28D81C0B4D(Local_2996[iLocal_3037 /*20*/].f_8))
				{
					Local_2996[iLocal_3037 /*20*/].f_8 = unk_0xB20BB447C131B310(Local_2996[iLocal_3037 /*20*/].f_6);
					unk_0xFA3E6ADC3E5D386E(Local_2996[iLocal_3037 /*20*/].f_8, 3);
				}
			}
			if (iLocal_420 == 1)
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
				else if (Global_112293.f_19971.f_7 == 2)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
			}
			func_59(&uLocal_3088);
			if (!bLocal_2957)
			{
				if (func_47())
				{
					unk_0x75B41F5020877259(1);
					unk_0x1036762BD3781C84();
					func_115(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (iLocal_2931)
					{
						unk_0x1036762BD3781C84();
						func_115(sParam0, 7500, 1);
						iLocal_2931 = 0;
					}
					else
					{
						unk_0x1036762BD3781C84();
						func_115(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3068, sParam0, 64);
				}
			}
			iLocal_3115 = 7;
		}
	}
	return 0;
}

int func_104(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_3037 != -1)
	{
		if (!func_11(Local_3017.f_14))
		{
			Local_2629 = { Local_3017.f_14 };
			*uParam0 = { Local_3017.f_7 };
			*uParam1 = { Local_3017.f_10 };
			*uParam2 = Local_3017.f_13;
		}
		else
		{
			*uParam0 = { Local_3017 };
			*uParam1 = { Local_3017.f_3 };
			*uParam2 = Local_3017.f_6;
		}
		if (!bLocal_2959)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_2629, 30f, 30f, 2f, 1, 1, 0))
				{
					if (iLocal_420 == 0 || iLocal_420 == 4)
					{
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
						{
							unk_0x5C052A30B9FCA449(Local_2996[0 /*20*/].f_6, 1);
							bLocal_2939 = true;
						}
					}
				}
			}
		}
		if (unk_0x419E13582192CFEA(Local_2996[iLocal_3037 /*20*/].f_6))
		{
			if (unk_0x8954E9D0A9F6F8CF(Local_2996[iLocal_3037 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_2941)
				{
					func_105("TOWT_HELP_UH", -1);
				}
				if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[iLocal_3037 /*20*/].f_6, 0))
				{
					if (!unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6) || (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Local_2996[iLocal_3037 /*20*/].f_6, 0) && !unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[iLocal_3037 /*20*/].f_6)))
					{
						if (func_47())
						{
							func_172();
						}
						func_146(&uLocal_399, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_105(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_106(char* sParam0, struct<3> Param1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_2945 && !bLocal_2956)
	{
		if (unk_0x419E13582192CFEA(iLocal_3109) && !unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
		{
			iVar2 = unk_0x05029439A5245679(iLocal_3109);
			if (unk_0x419E13582192CFEA(iVar2) && !unk_0xE50EB54E0F21BED0(iVar2, 0))
			{
				if (unk_0x55F5BD4ABD80B211(iVar2))
				{
					if (unk_0x611CD1312FD3CA66(iVar2) != Local_2996[0 /*20*/].f_6)
					{
						if (!iLocal_2972)
						{
							func_257(&uLocal_484, 3, iLocal_2984, "TONYA", 0, 1);
							if (func_171(&uLocal_484, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_2972 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2972 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0x419E13582192CFEA(Local_2996[iVar1 /*20*/].f_6))
		{
			if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[iVar1 /*20*/].f_6, 0))
			{
				if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[iVar1 /*20*/].f_6) && func_112())
				{
					unk_0xE3F32DF0088B1EA4(iLocal_3109, 1);
					func_109();
					func_146(&uLocal_399, 0, 0);
					iLocal_468 = 1;
					if (iLocal_2961 && !unk_0xF41EB7643E61A928(Local_2996[iVar1 /*20*/], iLocal_3109, 0))
					{
						bVar0 = false;
						if (iLocal_3120 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_3120 = 5;
						}
					}
					if (bVar0)
					{
						func_108(&uLocal_3094);
						unk_0x13CC211F9F7ACE7F(Local_2996[iVar1 /*20*/].f_8, 0);
						iLocal_2967 = 0;
						func_107(Local_2996[iVar1 /*20*/].f_8);
						Local_2996[iVar1 /*20*/].f_14 = func_4(&(Local_2996[iVar1 /*20*/].f_11));
						if (iLocal_2992 == 0)
						{
							Local_2996[iVar1 /*20*/].f_8 = unk_0x27E44C95E1D1461C(Param1);
							fLocal_430 = func_9(Param1, 0);
							Local_2625[0 /*3*/] = { Param1 };
						}
						if (iLocal_420 == 4)
						{
							unk_0x616B09EEEFED8FAF(Local_2996[0 /*20*/].f_6, 0, 0);
						}
						func_59(&uLocal_3100);
						unk_0xFA3E6ADC3E5D386E(Local_2996[iVar1 /*20*/].f_8, 5);
						unk_0x13CC211F9F7ACE7F(Local_2996[iVar1 /*20*/].f_8, 1);
						if (iLocal_420 == 0 && bLocal_2965)
						{
						}
						else if (iLocal_2932)
						{
							func_115(sParam0, 7500, 1);
							iLocal_2932 = 0;
						}
						StringCopy(&cLocal_3068, sParam0, 64);
						unk_0xB7D390F8F682127B(Local_2625[0 /*3*/], 6f, 0, 0, 0, 0, 0, 0);
						iLocal_3037 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_107(var uParam0)
{
	if (unk_0x575B7C28D81C0B4D(uParam0))
	{
		unk_0x1AD5BCFEC31BB8D9(&uParam0);
	}
}

void func_108(var uParam0)
{
	func_57(uParam0);
	StringCopy(&cLocal_317, "", 32);
}

void func_109()
{
	func_110("TOW_TUT_03");
	func_110("TOW_TUT_02");
	func_110("TOW_TUT_01");
	unk_0xAA18C87A1A6C1FAE("TOWT_OBJ_03");
	unk_0xAA18C87A1A6C1FAE("TOWT_OBJ_03a");
	unk_0xAA18C87A1A6C1FAE("TOWT_OBJ_03G");
	unk_0xAA18C87A1A6C1FAE("TOWT_OBJ_03Ga");
	unk_0xAA18C87A1A6C1FAE("TOWT_OBJS_03");
}

void func_110(char* sParam0)
{
	if (func_111(sParam0))
	{
		unk_0x66AE54CE92457FEE(1);
	}
}

bool func_111(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

int func_112()
{
	if (bLocal_2959)
	{
		if (bLocal_2602 && !func_47())
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

void func_113()
{
	int iVar0;
	
	if (((!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0)) && unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6)) || (Global_112293.f_19971.f_3 == 0 || Global_112293.f_19971.f_3 > 2))
	{
		return;
	}
	switch (iLocal_3050)
	{
		case 0:
			if (!func_7(&uLocal_3106))
			{
				func_263(&uLocal_3106);
				iLocal_3050 = 1;
			}
			break;
		
		case 1:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 10f)
				{
					if (!unk_0x9B8D025C6C2200C5() && !func_47())
					{
						iVar0 = (unk_0xB36B8558948EA7A8(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_105("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_105("TOW_TUT_02", -1);
						}
						else
						{
							func_105("TOW_TUT_04C", -1);
						}
						func_59(&uLocal_3106);
						iLocal_3050 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!unk_0x9B8D025C6C2200C5() && !func_47())
					{
						func_105("TOW_TUT_03", -1);
						func_59(&uLocal_3106);
						iLocal_3050 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!unk_0x9B8D025C6C2200C5() && !func_47())
					{
						func_105("TOW_TUT_01", -1);
						iLocal_3050 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_114(int iParam0, var uParam1)
{
	if (func_11(Local_45[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_45[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_45[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_45[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_45[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_45[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_45[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_70[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_115(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

int func_116(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2958)
			{
				if ((func_123(Local_2996[iParam1 /*20*/].f_6, iLocal_3109, &iLocal_2603, 10, 150f, 4f, 1) || iLocal_2953) || iLocal_468)
				{
					if (!bLocal_2936)
					{
						iLocal_2603 = 0;
						func_122(&iLocal_2598);
						if (unk_0x4E8DA737B686529A(Local_2996[iParam1 /*20*/], -875674219) != 1)
						{
							unk_0xB0C1A43193C25F7A(Local_2996[iParam1 /*20*/], unk_0x7D2B9E6A64637269(), -1);
						}
						bLocal_2936 = true;
					}
					if (bLocal_2936)
					{
						if (unk_0x591190E69BE43117(iLocal_3109, unk_0xD6E677FAD7521410(Local_2996[iParam1 /*20*/], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (unk_0x698F51FB33ADAF7B(Local_2996[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0x066FC15C60D0E579(Local_2996[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_121())
							{
								if (iLocal_420 == 1)
								{
									if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
									{
										func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_112293.f_19971.f_5 == 2)
									{
										func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0x95CA4545D0C61309(Local_2996[iParam1 /*20*/], iLocal_3109, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_420 == 3)
								{
									if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
									{
										func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_112293.f_19971.f_7 == 2)
									{
										func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0x95CA4545D0C61309(Local_2996[iParam1 /*20*/], iLocal_3109, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_2953)
								{
									unk_0x1AD5BCFEC31BB8D9(&(Local_2996[iParam1 /*20*/].f_8));
									if (unk_0x419E13582192CFEA(Local_2996[iParam1 /*20*/]))
									{
										Local_2996[iParam1 /*20*/].f_8 = unk_0xB20BB447C131B310(Local_2996[iParam1 /*20*/]);
										unk_0xFA3E6ADC3E5D386E(Local_2996[iParam1 /*20*/].f_8, 3);
										unk_0xDD205B87CDFD0C1B(Local_2996[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (unk_0x591190E69BE43117(iLocal_3109, unk_0xD6E677FAD7521410(Local_2996[iParam1 /*20*/], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_2977)
							{
								if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
								{
									func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
									func_257(&Local_2348, 5, Local_2996[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_171(&Local_2348, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2977 = 1;
									}
								}
								else if (Global_112293.f_19971.f_7 == 2)
								{
									func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
									func_257(&Local_2348, 6, Local_2996[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_2977 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2940 = true;
			func_59(&uLocal_3100);
			func_59(&uLocal_3085);
			func_107(Local_2996[iParam1 /*20*/].f_8);
			if (!unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_9))
			{
				if (unk_0x419E13582192CFEA(Local_2996[iParam1 /*20*/]))
				{
					Local_2996[0 /*20*/].f_9 = unk_0xB20BB447C131B310(Local_2996[iParam1 /*20*/]);
					unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_9, 3);
					unk_0xDD205B87CDFD0C1B(Local_2996[0 /*20*/].f_9, 0.7f);
				}
			}
			func_115("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0xF479CA7199C54C8F("TOWBUDDIES", &uLocal_2995);
			unk_0x78B2DF314748056B(1, uLocal_2995, 1862763509);
			unk_0x2271ED1E65FB75EE(Local_2996[iParam1 /*20*/], uLocal_2995);
			func_120(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0xF41EB7643E61A928(Local_2996[iParam1 /*20*/], iLocal_3109, 0))
			{
				if (func_117(&uLocal_3124, Local_2996[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_3084 = 11;
					func_267();
				}
			}
			if (unk_0xF41EB7643E61A928(Local_2996[iParam1 /*20*/], iLocal_3109, 0))
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
				{
					unk_0x5C052A30B9FCA449(iLocal_3109, 9);
					func_107(Local_2996[0 /*20*/].f_9);
				}
			}
			if (unk_0xF41EB7643E61A928(Local_2996[iParam1 /*20*/], iLocal_3109, 0) && !unk_0x6C2F471E0CF8D4CF())
			{
				if (iLocal_420 == 1)
				{
					if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_112293.f_19971.f_5 == 2)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_420 == 3)
				{
					if (Global_112293.f_19971.f_7 == 0 || Global_112293.f_19971.f_7 == 1)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_112293.f_19971.f_7 == 2)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xF41EB7643E61A928(Local_2996[iParam1 /*20*/], iLocal_3109, 0))
			{
				func_120(iParam1);
				if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
				{
					if (iLocal_2953 && unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_8))
				{
					if (unk_0x419E13582192CFEA(Local_2996[iParam1 /*20*/].f_6) && !unk_0xE50EB54E0F21BED0(Local_2996[iParam1 /*20*/].f_6, 0))
					{
						Local_2996[0 /*20*/].f_8 = unk_0xB20BB447C131B310(Local_2996[iParam1 /*20*/].f_6);
						unk_0xFA3E6ADC3E5D386E(Local_2996[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
				{
					if (!unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						func_115("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3068, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&uLocal_3085);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_117(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			uParam0->f_2 = func_118(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
			{
				Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_118(int iParam0, int iParam1)
{
	return func_119(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), iParam0, iParam1);
}

float func_119(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var3, iParam2);
}

void func_120(int iParam0)
{
	int iVar0;
	
	bLocal_2958 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x575B7C28D81C0B4D(Local_2996[iVar0 /*20*/].f_8))
			{
				unk_0x1AD5BCFEC31BB8D9(&(Local_2996[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_121()
{
	float fVar0;
	
	if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
	{
		if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
		{
			fVar0 = unk_0x4DDAC4C80BACF92C(iLocal_3109);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_122(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x791B4C3811D53DFA(*iParam0);
		unk_0xBAB6F7501A822416(*iParam0);
		*iParam0 = -1;
	}
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	var uVar0;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xA2CCAAC7F5CA3F49(iParam0))
		{
			uVar0 = unk_0xFAA5505029C4B5A6(iParam0);
		}
	}
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(uVar0, 0) && unk_0xECEC7528A52B4EE8(iVar0))
		{
			return 0;
		}
	}
	if (unk_0x419E13582192CFEA(iParam0) && unk_0x419E13582192CFEA(iParam1))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!unk_0x98E18969B1D0C4AB(iParam0) && func_118(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_118(iParam0, 1) < 8f) && unk_0x4DDAC4C80BACF92C(iParam1) < fParam5) && !unk_0x98E18969B1D0C4AB(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_124()
{
	int iVar0;
	
	if (!bLocal_2940)
	{
		iVar0 = SYSTEM::ROUND(((300f - func_128(&uLocal_3100)) * 1000f));
		if (iLocal_420 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_125(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_125(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_125(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_127(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_126(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_126(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_127(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

float func_128(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&Global_110931, iParam0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_110931, iParam0);
	}
	Global_110930 = 1;
}

void func_130()
{
	int iVar0;
	
	iVar0 = func_131(&Local_45, Local_2625[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_2629 = { Local_45[iVar0 /*3*/] };
		func_114(iVar0, &Local_3017);
	}
	else
	{
		Local_2629 = { Local_45[0 /*3*/] };
	}
}

int func_131(var uParam0, struct<3> Param1, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_132(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_430 = func_9(Local_3063, 0);
	Local_2625[0 /*3*/] = { Local_3063 };
	sLocal_3114 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_138(Local_3063, fLocal_3066, uParam2, 0))
		{
			func_137(Local_2996[0 /*20*/].f_6, &uLocal_3042, &uLocal_3044);
			unk_0x5EB620E783C4517C(Local_2996[0 /*20*/].f_6, 1);
			unk_0xED4E91A1FC7ABBF6(Local_2996[0 /*20*/].f_6, 0);
			unk_0x46EDFC827DC67D89(Local_2996[0 /*20*/].f_6, 1, 1);
			unk_0xD4DF29F3D7B97053(Local_2996[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_133(bParam4, 0))
	{
		func_137(Local_2996[0 /*20*/].f_6, &uLocal_3042, &uLocal_3044);
		unk_0x5EB620E783C4517C(Local_2996[0 /*20*/].f_6, 1);
		unk_0xED4E91A1FC7ABBF6(Local_2996[0 /*20*/].f_6, 0);
		unk_0x46EDFC827DC67D89(Local_2996[0 /*20*/].f_6, 1, 1);
		unk_0xD4DF29F3D7B97053(Local_2996[0 /*20*/].f_6, 1);
		return 1;
	}
	return 0;
}

int func_133(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_135(Local_650[iLocal_2604 /*23*/].f_1, Local_650[iLocal_2604 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_430 = func_9(Local_650[iLocal_2604 /*23*/].f_1, 0);
	Local_2625[0 /*3*/] = { Local_650[iLocal_2604 /*23*/].f_1 };
	if (Local_650[iLocal_2604 /*23*/] == 2)
	{
		unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_650[iLocal_2604 /*23*/] == 4)
	{
		fLocal_3066 = -1f;
		iLocal_2950 = 1;
		iLocal_3110 = unk_0x170478CC84C8AE2F(joaat("ambulance"), Local_1870[func_256() /*28*/].f_23, Local_1870[func_256() /*28*/].f_26, 1, 1, 0);
		if (!unk_0xE50EB54E0F21BED0(iLocal_3110, 0))
		{
			unk_0xE3F32DF0088B1EA4(iLocal_3110, 1);
			unk_0x89E171705EA920DA(iLocal_3110, 1, 1, 0);
			iLocal_3111 = unk_0x42F3C85A00B4FC7B(iLocal_3110, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
		}
		if (!func_11(Local_1870[func_256() /*28*/].f_17))
		{
			uLocal_2347 = func_134(Local_1870[func_256() /*28*/].f_17, Local_1870[func_256() /*28*/].f_20);
		}
		switch (Local_650[iLocal_2604 /*23*/].f_21)
		{
			case 1:
				unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				unk_0x21DC133439C50AA5(Local_2996[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		unk_0x94F15E506D091111(Local_2996[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_442 = true;
		if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
		{
			Local_2996[0 /*20*/] = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, 1, 1);
		}
		else if (Global_112293.f_19971.f_5 == 2)
		{
			Local_2996[0 /*20*/] = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
		}
		else
		{
			Local_2996[0 /*20*/] = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_6, 26, uLocal_2989[0], -1, 1, 1);
		}
	}
	return 1;
}

var func_134(struct<3> Param0, struct<3> Param3)
{
	unk_0x494E8A58F41F5F54(Param0, Param3);
	unk_0xA48693249537873E(Param0, Param3, 1);
	return unk_0x0823FA7465392E20(Param0, Param3, 0, 1, 1, 1);
}

int func_135(struct<3> Param0, var uParam3, int iParam4, bool bParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = func_136(&Local_2996);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_3039 >= 2)
	{
		iLocal_3039 = 0;
	}
	Local_2996[*iParam4 /*20*/].f_6 = unk_0x170478CC84C8AE2F(iLocal_2987[iLocal_3039], Param0, uParam3, 1, 1, 0);
	unk_0x46EDFC827DC67D89(Local_2996[*iParam4 /*20*/].f_6, 1, 1);
	iLocal_3039++;
	fLocal_430 = func_9(Param0, 0);
	if (iLocal_420 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_650[iLocal_2604 /*23*/].f_10))
	{
		Local_2996[*iParam4 /*20*/].f_17 = unk_0x077121A83525E84C(Local_650[iLocal_2604 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2996[*iParam4 /*20*/].f_17 = unk_0x077121A83525E84C(Param0, fVar0, 0f, 0);
	}
	Local_2996[*iParam4 /*20*/].f_18 = unk_0x077121A83525E84C(Param0, fVar1, 2.5f, 0);
	Local_2996[*iParam4 /*20*/].f_19 = unk_0x077121A83525E84C(Param0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2996[*iParam4 /*20*/].f_15)
		{
			unk_0xA93D9EAF176A34D2(Local_2996[*iParam4 /*20*/].f_6, 1);
			unk_0xEBF08082D648C482(Local_2996[*iParam4 /*20*/].f_6, 1f);
			unk_0x4B9078DC74C5BC7C(Local_2996[*iParam4 /*20*/].f_6, 1);
		}
		else
		{
			unk_0xA93D9EAF176A34D2(Local_2996[*iParam4 /*20*/].f_6, 1);
			unk_0xEBF08082D648C482(Local_2996[*iParam4 /*20*/].f_6, 1f);
			unk_0x4B9078DC74C5BC7C(Local_2996[*iParam4 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_2958 && uParam6)
	{
		if (unk_0x419E13582192CFEA(Local_2996[*iParam4 /*20*/].f_6))
		{
			Local_2996[*iParam4 /*20*/].f_8 = unk_0xB20BB447C131B310(Local_2996[*iParam4 /*20*/].f_6);
			unk_0xFA3E6ADC3E5D386E(Local_2996[*iParam4 /*20*/].f_8, 3);
		}
	}
	iLocal_3038++;
	func_263(&(Local_2996[*iParam4 /*20*/].f_11));
	return 1;
}

int func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((uParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_137(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		*uParam1 = unk_0x5E7C0A485B91DB87(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_138(struct<3> Param0, float fParam3, var uParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	var uVar15;
	
	if (!func_135(Param0, fParam3, uParam4, 1, iParam5))
	{
		return 0;
	}
	if (*uParam4 == -1)
	{
	}
	unk_0x94F15E506D091111(Local_2996[*uParam4 /*20*/].f_6, 4, 0, 0);
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(Local_2996[*uParam4 /*20*/].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2950 = 1;
	Var0 = { unk_0x9E695CE384C77EF0(Local_2996[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var12 = { unk_0xD6E677FAD7521410(Local_2996[*uParam4 /*20*/].f_6, 1) };
	uVar15 = unk_0xA8D713A937F31250(Local_2996[*uParam4 /*20*/].f_6);
	uLocal_3048 = unk_0x077121A83525E84C(unk_0x26C2ACB261895E70(Var12, uVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	uLocal_3049 = unk_0x077121A83525E84C(unk_0x26C2ACB261895E70(Var12, uVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	unk_0xB7D390F8F682127B(Var0, 30f, 0, 0, 0, 0, 0, 0);
	Local_1870[func_256() /*28*/][0 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_139(var uParam0, float fParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	
	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = (unk_0xB36B8558948EA7A8(0, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -unk_0x644B8DBA4F69BB73(450f, 700f);
		fVar9 = unk_0x644B8DBA4F69BB73(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = unk_0x644B8DBA4F69BB73(450f, 700f);
		fVar9 = unk_0x644B8DBA4F69BB73(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = unk_0x644B8DBA4F69BB73(450f, 700f);
		fVar8 = unk_0x644B8DBA4F69BB73(-100f, 100f);
	}
	else
	{
		fVar9 = -unk_0x644B8DBA4F69BB73(450f, 700f);
		fVar8 = unk_0x644B8DBA4F69BB73(-100f, 100f);
	}
	Var0 = { unk_0x9E695CE384C77EF0(unk_0x7D2B9E6A64637269(), fVar8, fVar9, 0f) };
	if (!unk_0x4569005B3D20FB02(Var0, 10f, 1, 1, 1, &Var5, &uVar4))
	{
		return 0;
	}
	unk_0x87BE0E4947F798AC(Var5, 2, uParam2, fParam1, &uVar3, 1, 1077936128, 0);
	*uParam0 = { Var5 };
	if (unk_0x636F1F53CC61D2C9(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_140(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_140(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_141(int iParam0)
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

void func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x575B7C28D81C0B4D(Local_280[iVar0 /*3*/].f_1))
		{
			if (unk_0xE50EB54E0F21BED0(Local_280[iVar0 /*3*/], 0))
			{
				unk_0x1AD5BCFEC31BB8D9(&(Local_280[iVar0 /*3*/].f_1));
			}
			else if (Local_280[iVar0 /*3*/].f_2 && func_118(Local_280[iVar0 /*3*/], 1) > 200f)
			{
				unk_0x1AD5BCFEC31BB8D9(&(Local_280[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_143()
{
	if (!unk_0xDA654EB115F9FF7D(&cLocal_272, ""))
	{
		if (!func_47())
		{
			func_171(&Local_96, &cLocal_272, &cLocal_276, 9, 0, 0, 0);
			StringCopy(&cLocal_272, "", 16);
		}
	}
}

void func_144(var uParam0, float fParam1, bool bParam2)
{
	if (func_145(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_105(&cLocal_317, -1);
		}
		else
		{
			func_115(&cLocal_317, 7500, 1);
		}
	}
}

int func_145(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_57(uParam0);
		return 1;
	}
	return 0;
}

void func_146(var uParam0, int iParam1, int iParam2)
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
		if (func_111(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_111(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

void func_147(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x79CC60D128756F16())
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
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
	if (func_111(iVar0))
	{
		func_169();
	}
	if (!unk_0x79CC60D128756F16())
	{
		if (func_164(uParam0, bParam6, bParam8, 0))
		{
			func_163(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_152(iVar0))
			{
				if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if ((unk_0x3D6C3476988DE6E1(Param1, 1f) && !unk_0xE8FFE38E2BA32BD6()) && iParam7)
					{
						if (!func_111(iVar0))
						{
							func_105(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_151(1);
							}
						}
					}
				}
			}
		}
		else if (func_152(iVar0))
		{
			if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
			{
				if ((unk_0x3D6C3476988DE6E1(Param1, 1f) && !unk_0xE8FFE38E2BA32BD6()) && iParam7)
				{
					if (!func_111(iVar0))
					{
						func_105(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
						{
							func_151(1);
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
			if (func_111(iVar0) && unk_0xE8FFE38E2BA32BD6())
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
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
			{
				func_146(uParam0, iVar0, 1);
			}
		}
		if (!func_164(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_150(uParam0))
			{
				func_148(uParam0);
			}
		}
	}
}

void func_148(var uParam0)
{
	if (func_149(unk_0x7D2B9E6A64637269()))
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

int func_149(int iParam0)
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

int func_150(var uParam0)
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

int func_151(bool bParam0)
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

int func_152(char* sParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!unk_0xAB6A270F84A8781E(sParam0) && func_111(sParam0)) || func_111("CMN_HINT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return 0;
	}
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_162(0))
	{
		return 0;
	}
	if (func_161())
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
	if ((func_160() || func_159(Global_4456448.f_133963)) || func_158())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_157(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_156(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1694746)
	{
		return 0;
	}
	if (func_154(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_155(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_155(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
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

int func_156(int iParam0, int iParam1)
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

int func_157(int iParam0, int iParam1)
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

var func_158()
{
	return Global_2453009.f_19;
}

bool func_159(int iParam0)
{
	return iParam0 == 51;
}

var func_160()
{
	return Global_2453009.f_18;
}

bool func_161()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_162(int iParam0)
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

void func_163(var uParam0, struct<3> Param1, int iParam4)
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

int func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_150(uParam0))
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
						if (!func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_168(bParam1, bParam2, bParam3))
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
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_167(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
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
				else if (!func_168(bParam1, bParam2, bParam3))
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
						if (func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_165(bParam1, bParam2, bParam3))
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
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_150(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_169();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

void func_169()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

int func_170(bool bParam0)
{
	if (bLocal_467 || iLocal_466)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_468)
		{
			return 0;
		}
	}
	return 1;
}

bool func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_15(sParam2, iParam3, 0);
}

void func_172()
{
	Global_19991 = 0;
	func_35();
}

int func_173()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	}
	if (unk_0x419E13582192CFEA(iLocal_2984) && !unk_0xE50EB54E0F21BED0(iLocal_2984, 0))
	{
		Var3 = { unk_0xD6E677FAD7521410(iLocal_2984, 1) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
	{
		if (!bLocal_2968)
		{
			func_174("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2968 = true;
			if (!unk_0x575B7C28D81C0B4D(uLocal_425))
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_2984, 0))
				{
					uLocal_425 = unk_0xB20BB447C131B310(iLocal_2984);
					unk_0xFA3E6ADC3E5D386E(uLocal_425, 3);
					unk_0xDD205B87CDFD0C1B(uLocal_425, 0.5f);
				}
			}
			if (unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_8))
			{
				unk_0x1AD5BCFEC31BB8D9(&(Local_2996[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_2968)
	{
		bLocal_2968 = false;
		if (unk_0x575B7C28D81C0B4D(uLocal_425))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_425);
		}
		if (!unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_8))
		{
			Local_2996[0 /*20*/].f_8 = unk_0x27E44C95E1D1461C(Local_2625[0 /*3*/]);
			if (iLocal_468)
			{
				unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_8, 5);
				unk_0x13CC211F9F7ACE7F(Local_2996[0 /*20*/].f_8, 1);
				unk_0x1EF92774F7B1187E(Local_2996[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_8, 3);
				unk_0x13CC211F9F7ACE7F(Local_2996[0 /*20*/].f_8, 1);
				unk_0x1EF92774F7B1187E(Local_2996[0 /*20*/].f_8, 3);
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
	{
		if (bLocal_2968)
		{
			return 1;
		}
	}
	return 0;
}

void func_174(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 0);
}

int func_175(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x7D2B9E6A64637269();
	if (!unk_0xE50EB54E0F21BED0(iVar0, 0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (!func_182(*uParam2, 1))
		{
			if (func_181(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_182(*uParam2, 2))
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_182(*uParam2, 4))
		{
			if (func_179(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_182(*uParam2, 8))
		{
			if (func_178(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_182(*uParam2, 128);
		if (bParam4)
		{
			if (func_176(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_182(*uParam2, 16))
		{
			if (func_176(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x419E13582192CFEA(iParam0))
	{
		if (iParam7 && unk_0xA6E8FBD68548675F(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_395)
		{
			iLocal_396 = unk_0x5E7C0A485B91DB87(iParam0);
			bLocal_395 = true;
		}
		iLocal_397 = unk_0x5E7C0A485B91DB87(iParam0);
		iLocal_398 = (iLocal_396 - iLocal_397);
		iVar0 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_395)
		{
			if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (unk_0xECA23EB9C2A5E83F(iParam0))
			{
				if (unk_0x4EAA932BAAB38AF6(iParam0) == unk_0x7D2B9E6A64637269())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x591190E69BE43117(iParam0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xCDDAB3241735D813(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xB30D2DEA3AE60A3B(iParam0))
		{
			return 1;
		}
	}
	if (func_177(unk_0x7D2B9E6A64637269(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x6B9E71121F5B8154(iParam0) && func_118(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xC49311A2A500FF09(iParam0, 0))
		{
			if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), unk_0x75B58B38E45C6F9A(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam1, unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7F716EA884E75E49(iParam0))
		{
			if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(iParam1, 1)) < 2.5f)
			{
				if (unk_0x836F48E8C4A773BF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x24A466C655E8588A(iParam0, 4))
	{
		if (unk_0x7F716EA884E75E49(iParam0) && !unk_0x8E93627D38C90C19(iParam0))
		{
			if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	if (unk_0x3E72EB0926A107F9(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA3EE9E61D762C09A(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x24A466C655E8588A(iParam0, 2))
	{
		if (unk_0x7F716EA884E75E49(iParam0))
		{
			if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x836F48E8C4A773BF(unk_0xFAA5505029C4B5A6(iParam1), iParam0, 120f) && unk_0x895779B17E5AA5FE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xC49311A2A500FF09(unk_0xFAA5505029C4B5A6(iParam1), 0))
			{
				iVar3 = unk_0x75B58B38E45C6F9A(unk_0xFAA5505029C4B5A6(iParam1), 0);
			}
			if (unk_0x8A92595B8AA1D4E9(iParam0) || func_180(iVar3))
			{
				if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x836F48E8C4A773BF(unk_0xFAA5505029C4B5A6(iParam1), iParam0, 120f) && unk_0x895779B17E5AA5FE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xD7196DD041C06559((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x27FC1B0077581B37(iParam0, -1, 0) != 0)
			{
				if (unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_119(unk_0x7D2B9E6A64637269(), iParam0, 1) < 40f)
						{
							if (unk_0xE5B011B4A813BDC4(unk_0x1146A9AE09CE2B14(), &iVar1))
							{
								if ((unk_0x55F5BD4ABD80B211(iVar1) && unk_0x611CD1312FD3CA66(iVar1) == iParam0) || (unk_0xA2CCAAC7F5CA3F49(iVar1) && unk_0xFAA5505029C4B5A6(iVar1) == unk_0x27FC1B0077581B37(iParam0, -1, 0)))
								{
									if ((unk_0xBBC3519C07015926(unk_0x7D2B9E6A64637269()) && unk_0x5C6675393464A814(0, 24)) || (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0x5C6675393464A814(0, 69)))
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
	return 0;
}

int func_181(int iParam0, var uParam1)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
		{
			if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), 90f))
				{
					if (func_118(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xDFB7BFA6482FEE1E();
						}
						else if ((unk_0xDFB7BFA6482FEE1E() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (unk_0x419E13582192CFEA((*uParam4)[iVar0]))
		{
			if (!unk_0xE50EB54E0F21BED0((*uParam4)[iVar0], 0) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (func_175((*uParam4)[iVar0], 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 1))
				{
					unk_0x1DC2BF231DE6A016((*uParam4)[iVar0], unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_123(iParam1, iParam3, &iLocal_2603, 20, 70f, 65f, 0))
			{
				iLocal_2603 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0x419E13582192CFEA(iParam2))
			{
				if (!unk_0xE50EB54E0F21BED0(iParam1, 0) && !unk_0xE50EB54E0F21BED0(iParam2, 0))
				{
					unk_0x0509CE092AC81B7C(iParam2, iParam1, 50f, 786469);
					unk_0x504B26425DFF773C(iParam2, 1);
					unk_0x0F3BD19FF11738D3(&iParam2);
					unk_0x795957CD3A0042C8(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_468)
			{
				func_59(&uLocal_2513);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0x419E13582192CFEA((*uParam4)[iVar0]))
				{
					if (!unk_0xE50EB54E0F21BED0((*uParam4)[iVar0], 0))
					{
						if (func_118((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_471 = iVar0;
							iLocal_471 = iLocal_471;
							func_59(&uLocal_2513);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_1870[func_256() /*28*/].f_17))
			{
				func_184(uLocal_2347, Local_1870[func_256() /*28*/].f_17, Local_1870[func_256() /*28*/].f_20);
			}
			if (unk_0x636F1F53CC61D2C9(joaat("tonya5")) == 1)
			{
				if (!iLocal_457)
				{
					func_257(&uLocal_484, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_457 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0xE50EB54E0F21BED0((*uParam4)[iVar0], 0))
				{
					unk_0x5C679902079A7E80(&uLocal_421);
					unk_0x4261814A9A26E86F(0, sParam6, (*sParam7)[iVar0], 4f, -4f, unk_0xB36B8558948EA7A8(10000, 20000), 0, 0, 0, 0, 0);
					unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
					unk_0x1BBD0A5729AB1226(uLocal_421);
					unk_0x8A1AC8EBC73850C8((*uParam4)[iVar0], uLocal_421);
					unk_0x8D5B447F21217223(&uLocal_421);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x636F1F53CC61D2C9(joaat("tonya5")) == 1)
			{
				if (!iLocal_457)
				{
					func_257(&uLocal_484, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_457 = 1;
					}
				}
				if (!iLocal_469)
				{
					if (!unk_0xE50EB54E0F21BED0(iParam3, 0) && !unk_0xE50EB54E0F21BED0(*uParam10, 0))
					{
						if (!unk_0xF2C5E5F021DB1E93(iParam3, *uParam10))
						{
							if (!func_7(&uLocal_2528))
							{
								func_263(&uLocal_2528);
							}
							else if (func_4(&uLocal_2528) > 20f)
							{
								if (func_171(&uLocal_484, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_469 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param4)
{
	unk_0xE6B53A6E51AAA49F(uParam0, 0);
	unk_0x36C2CA307C00F187();
	unk_0xA48693249537873E(Param1, Param4, 0);
}

int func_185(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char[4] cParam9, char* sParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (unk_0x7956E831D8C0C17C(Var3, &uVar0, 0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_187(uParam1);
		unk_0x91F94D2287684BDB(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11)
		{
			if (fParam8 == -1f)
			{
				fParam8 = func_186(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				fParam8 = (fParam8 + 180f);
			}
			if (unk_0x636F1F53CC61D2C9(joaat("tonya4")) == 1)
			{
				iVar1 = unk_0x0FDCFECB2EF2BC1C(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
				unk_0x4170FE884DF7426D(iVar1, 0, 0, 1, 0);
				unk_0x4170FE884DF7426D(iVar1, 2, 0, 0, 0);
				unk_0x4170FE884DF7426D(iVar1, 3, 0, 2, 0);
				unk_0x4170FE884DF7426D(iVar1, 4, 1, 2, 0);
				unk_0x4170FE884DF7426D(iVar1, 8, 0, 0, 0);
				unk_0x4170FE884DF7426D(iVar1, 10, 1, 1, 0);
				unk_0x824F744352C8BC82(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x636F1F53CC61D2C9(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = unk_0x0FDCFECB2EF2BC1C(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					unk_0x824F744352C8BC82(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = unk_0x0FDCFECB2EF2BC1C(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					unk_0x824F744352C8BC82(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = unk_0x0FDCFECB2EF2BC1C(4, (*uParam7)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
			}
			unk_0x46EDFC827DC67D89(iVar1, 1, 1);
			fParam8 = -1f;
			if (iParam11 > 1)
			{
				(*uParam6)[iVar2] = iVar1;
			}
			else
			{
				*uParam5 = iVar1;
			}
			cParam9 = cParam9;
			(*sParam10)[iVar2] = (*sParam10)[iVar2];
			unk_0xBE91B077ADADE97F(iVar1, 1);
			unk_0x7B28A83A0D3DD0F9(iVar1, 42, 1);
			unk_0xC63C967EC1D348E4(iVar1, "move_m@JOG@", 1048576000);
			unk_0xD991F7672CE8EAD3(iVar1, 109, 1);
			if (iLocal_420 == 3)
			{
				unk_0x8D5B447F21217223(&uVar6);
				unk_0x5C679902079A7E80(&uVar6);
				unk_0x4261814A9A26E86F(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), -1);
				unk_0x1BBD0A5729AB1226(uVar6);
				if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
				{
					unk_0x8A1AC8EBC73850C8(iVar1, uVar6);
				}
				unk_0x8D5B447F21217223(&uVar6);
			}
			iVar2++;
		}
		bLocal_442 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_186(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x832AD84AA258AE80((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_187(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2556[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2556[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2556[iVar0 /*18*/].f_8 = { func_188(unk_0x644B8DBA4F69BB73(0f, 1f), unk_0x644B8DBA4F69BB73(0f, 1f), 0f) };
		}
		else
		{
			Local_2556[iVar0 /*18*/].f_8 = { func_188(0.5f, 1f, 0f) };
		}
		Local_2556[iVar0 /*18*/].f_11 = 2f;
		Local_2556[iVar0 /*18*/].f_12 = 1f;
		Local_2556[iVar0 /*18*/].f_13 = 1f;
		Local_2556[iVar0 /*18*/].f_14 = -1f;
		Local_2556[iVar0 /*18*/].f_15 = 0.1f;
		Local_2556[iVar0 /*18*/].f_17 = 0;
		Local_2556[iVar0 /*18*/].f_1 = 1110;
		Local_2556[iVar0 /*18*/] = unk_0x6EE2AE2D8DD2827E(Local_2556[iVar0 /*18*/].f_1, Local_2556[iVar0 /*18*/].f_2, Local_2556[iVar0 /*18*/].f_5, Local_2556[iVar0 /*18*/].f_8, Local_2556[iVar0 /*18*/].f_11, Local_2556[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_188(struct<3> Param0)
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

int func_189()
{
	func_192();
	switch (iLocal_3120)
	{
		case 0:
			func_257(&Local_2348, 0, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
			func_257(&Local_2348, 3, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
			unk_0xBE91B077ADADE97F(Local_2996[0 /*20*/], 1);
			iLocal_3041 = unk_0xB36B8558948EA7A8(35, 80);
			iLocal_3120 = 1;
			break;
		
		case 1:
			unk_0x5C679902079A7E80(&uLocal_421);
			unk_0x4261814A9A26E86F(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_421);
			unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
			unk_0x8D5B447F21217223(&uLocal_421);
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 40f || Local_2993.f_1 > 0)
			{
				if (iLocal_420 == 1)
				{
					if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
					{
						func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
					else if (Global_112293.f_19971.f_5 == 2)
					{
						func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
				}
			}
			else if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041 + 10))
			{
				unk_0x4261814A9A26E86F(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_3120 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_650[iLocal_2604 /*23*/].f_13))
			{
				Local_650[iLocal_2604 /*23*/].f_13.f_2 = 45f;
				Local_650[iLocal_2604 /*23*/].f_16.f_2 = -45f;
				if (!unk_0x8954E9D0A9F6F8CF(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, 1, 0))
				{
					func_122(&iLocal_2598);
					iLocal_2947 = 1;
					iLocal_2954 = 1;
					bLocal_427 = true;
					if (unk_0xC49311A2A500FF09(Local_2996[0 /*20*/], 0))
					{
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0xCC5ED49CF9C9215F(0, 0, 0);
						unk_0x4261814A9A26E86F(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
						unk_0x8D5B447F21217223(&uLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041 + 15))
			{
				if (Global_112293.f_19971.f_5 == 0 || Global_112293.f_19971.f_5 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_112293.f_19971.f_5 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_122(&iLocal_2598);
				unk_0x8ADA462BC5F42FD8(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_3120 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < IntToFloat(iLocal_3041))
			{
				if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
				{
					if (iLocal_3040 == 1)
					{
						func_191(&Local_2993);
					}
					iLocal_2947 = 1;
					if (unk_0xC49311A2A500FF09(Local_2996[0 /*20*/], 0))
					{
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0xCC5ED49CF9C9215F(0, 0, 0);
						unk_0x3C3DD4D53CF82FCD(0, unk_0x26C2ACB261895E70(Local_650[iLocal_2604 /*23*/].f_1, Local_650[iLocal_2604 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), -1);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						unk_0x82D2BB48A39F1E88(Local_2996[0 /*20*/], 64, 0);
						unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
						unk_0x8D5B447F21217223(&uLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_3119 == 8 && iLocal_468) || func_190())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_3120 = 5;
			}
			break;
		
		case 5:
			iLocal_2953 = 1;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_116(&iLocal_3117, 0, "TOW_TRAIN1"))
				{
					iLocal_3120 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_190()
{
	if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
	{
		if (bLocal_427)
		{
			switch (iLocal_3053)
			{
				case 0:
					if (unk_0x507B30DD5CDF782F(Local_2996[0 /*20*/]) == 1)
					{
						iLocal_3053 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x698F51FB33ADAF7B(Local_2996[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3053 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_191(var uParam0)
{
	uParam0->f_1 = 0;
	unk_0xFE1DEC9C5734D0C0(*uParam0, 0);
	unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
}

void func_192()
{
	float fVar0;
	
	if (iLocal_2947 || ((!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0)) && !unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0)))
	{
		if (iLocal_2598 != -1)
		{
			unk_0x791B4C3811D53DFA(iLocal_2598);
			unk_0xBAB6F7501A822416(iLocal_2598);
			iLocal_2598 = -1;
			return;
		}
	}
	if (!iLocal_2938)
	{
		iLocal_2598 = unk_0x5AD02BBC63E31E46();
		iLocal_2938 = 1;
	}
	if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
	{
		if (unk_0x698F51FB33ADAF7B(Local_2996[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x4598B7969D5B0A28(Local_2996[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_2937)
				{
					unk_0xE2D24A37AFCF27BF(iLocal_2598, "TOWING_ENGINE_TURNING_MASTER", Local_2996[0 /*20*/].f_6, 0, 0, 0);
					iLocal_2937 = 1;
				}
			}
			else
			{
				unk_0x791B4C3811D53DFA(iLocal_2598);
				iLocal_2937 = 0;
			}
		}
	}
}

void func_193()
{
	int iVar0;
	
	func_195();
	unk_0x66AE54CE92457FEE(1);
	unk_0xE498E37B41AEA1DF(2, 1);
	if (unk_0xDAE4BC89A198A6AF(uLocal_2608))
	{
		unk_0x3D9BC07C93913E04(&uLocal_2608);
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
	{
		unk_0x5C052A30B9FCA449(iLocal_3109, 1);
		unk_0xE3F32DF0088B1EA4(iLocal_3109, 0);
	}
	unk_0x43BA63ED2A7A4D2F(uLocal_3048);
	unk_0x43BA63ED2A7A4D2F(uLocal_3049);
	unk_0xE6B53A6E51AAA49F(uLocal_3112, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_3113, 0);
	unk_0x86DA8A407ED8A381(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0x43BA63ED2A7A4D2F(Local_2996[iVar0 /*20*/].f_17);
		unk_0x43BA63ED2A7A4D2F(Local_2996[iVar0 /*20*/].f_18);
		unk_0x43BA63ED2A7A4D2F(Local_2996[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_1870[func_256() /*28*/].f_17))
	{
		func_184(uLocal_2347, Local_1870[func_256() /*28*/].f_17, Local_1870[func_256() /*28*/].f_20);
	}
	unk_0x795957CD3A0042C8(&(Local_2996[0 /*20*/].f_6));
	if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
	{
		unk_0x0F3BD19FF11738D3(&(Local_2996[0 /*20*/]));
		if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/]))
		{
			if (unk_0x284BE2EA89FED4E1(Local_2996[0 /*20*/]))
			{
				unk_0xC1A7CF4B179CD225(Local_2996[0 /*20*/]);
			}
		}
	}
	if (unk_0x419E13582192CFEA(uLocal_2983))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_2983, 0))
		{
			unk_0x0F3BD19FF11738D3(&iLocal_2983);
		}
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
	{
		unk_0x4985CD0720AFD468(iLocal_3109, 1, 1);
		unk_0x795957CD3A0042C8(&iLocal_3109);
	}
	if (iLocal_2963)
	{
		unk_0x86DA8A407ED8A381(Local_2632, Local_2635, 1, 1);
	}
	if (iLocal_2960 && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_7, 0))
	{
		unk_0x9FC896A54C21FBA1(Local_2996[0 /*20*/].f_7, 1);
		unk_0x9EDEBDBCF0CA8781(&(Local_2996[0 /*20*/].f_7), 0);
		unk_0xB2B2B460EE75764E(1);
		func_129(0, 1);
		func_129(1, 0);
		func_129(2, 0);
		func_129(3, 1);
		func_129(4, 0);
		func_129(5, 0);
		func_129(6, 0);
		func_129(7, 0);
		func_129(8, 0);
		func_129(9, 0);
		func_129(10, 0);
		func_129(11, 0);
	}
	func_122(&iLocal_2596);
	func_122(&iLocal_2597);
	func_194(&uLocal_3127);
	func_122(&iLocal_2598);
	func_146(&uLocal_399, 0, 0);
	if (unk_0x0E8572B08CEB6A11(Local_2993))
	{
		func_191(&Local_2993);
	}
	unk_0x5E84945E26CAEF1F(1f);
	unk_0x16C6E55F8C91ED24(joaat("towtruck"), 0);
	unk_0x4BFE89D21F9885DC();
}

void func_194(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x39448B5909AEB658((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_195()
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

int func_196()
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0) && !unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
	{
		if (unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], iLocal_3109, 0))
		{
			if (unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_10))
			{
				unk_0x1AD5BCFEC31BB8D9(&(Local_2996[0 /*20*/].f_10));
				func_122(&iLocal_2598);
			}
		}
		else if (!unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
		{
			func_122(&iLocal_2598);
		}
	}
	switch (iLocal_3119)
	{
		case 0:
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 100f)
			{
				Local_2996[0 /*20*/].f_7 = unk_0x12CE1CDBAD8161A5(6, Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_5, 0, 0);
				if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_7))
				{
					Local_2996[0 /*20*/].f_10 = unk_0xB20BB447C131B310(Local_2996[0 /*20*/].f_7);
				}
				iLocal_2983 = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
				unk_0xBE91B077ADADE97F(iLocal_2983, 1);
				if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_7, 0))
				{
					unk_0xF706462DA6137097(Local_2996[0 /*20*/].f_7, 0f);
				}
				func_115("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				func_199("CROSSING_BELL", &iLocal_2599, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3119 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_650[iLocal_2604 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!unk_0xB30CD10E2CD1B67D("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xB84B43B766630B5C("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_7, 0))
			{
				unk_0xF706462DA6137097(Local_2996[0 /*20*/].f_7, 26f);
				unk_0x05524C2A43660E7F(Local_2996[0 /*20*/].f_7, 22f);
			}
			iLocal_3119 = 3;
			break;
		
		case 3:
			if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_7, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
			{
				if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < 175f)
				{
					func_198(Local_2996[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2597, 1, Local_2996[0 /*20*/].f_7, 0, 0, 0, 0);
					func_197(&uLocal_3127, Local_2996[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_HORN_MASTER", &iLocal_2596, 1, Local_2996[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_3119 = 4;
				}
			}
			else
			{
				iLocal_3119 = 8;
			}
			break;
		
		case 4:
			if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_7, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
			{
				func_198(Local_2996[0 /*20*/].f_7);
				if (!unk_0x8954E9D0A9F6F8CF(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, 1, 0))
				{
					func_194(&uLocal_3127);
				}
				Var0 = { unk_0xD6E677FAD7521410(Local_2996[0 /*20*/].f_7, 1) };
				if (func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) < 3f)
				{
					iLocal_2934 = 1;
				}
				if (unk_0x83B12E293561B796(Local_2996[0 /*20*/].f_7, Local_2996[0 /*20*/].f_6))
				{
					if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
					{
						if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
						{
							unk_0xEDAF90EB98D31F52(iLocal_3109, Local_2996[0 /*20*/].f_6);
						}
					}
					unk_0xF4C21F6414CF1653(Local_2996[0 /*20*/].f_6, 1, 0);
					iLocal_3119 = 6;
				}
				else if (func_10(Local_2996[0 /*20*/].f_6, Var0, 1) < 10f && unk_0x8954E9D0A9F6F8CF(Local_2996[0 /*20*/].f_6, Local_650[iLocal_2604 /*23*/].f_13, Local_650[iLocal_2604 /*23*/].f_16, Local_650[iLocal_2604 /*23*/].f_19, 0, 1, 0))
				{
					iLocal_2934 = 1;
					if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
					{
						if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
						{
							unk_0xEDAF90EB98D31F52(iLocal_3109, Local_2996[0 /*20*/].f_6);
						}
					}
					unk_0xF4C21F6414CF1653(Local_2996[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_2934 && func_10(Local_2996[0 /*20*/].f_7, Local_650[iLocal_2604 /*23*/].f_1, 1) > 4f)
				{
					iLocal_3119 = 6;
				}
			}
			else
			{
				iLocal_3119 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_468)
			{
				func_115("TOWT_OBJ_03G", 7500, 1);
				if (unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_10))
				{
					unk_0x1AD5BCFEC31BB8D9(&(Local_2996[0 /*20*/].f_10));
				}
			}
			unk_0x1AD5BCFEC31BB8D9(&(Local_2996[0 /*20*/].f_10));
			func_122(&iLocal_2596);
			func_122(&iLocal_2597);
			func_194(&uLocal_3127);
			func_122(&iLocal_2598);
			func_122(&iLocal_2599);
			iLocal_3119 = 7;
			break;
		
		case 7:
			if (!func_47())
			{
				if (!iLocal_468)
				{
					func_115("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0xB30CD10E2CD1B67D("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xC0BBE340BE2AA02D("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_197(var uParam0, var uParam1)
{
	(*uParam0)[0] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = unk_0x48558536A19BA88A("scr_ojtt_train_sparks", uParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_198(int iParam0)
{
	float fVar0;
	
	if (!func_7(&uLocal_2593))
	{
		func_263(&uLocal_2593);
	}
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			fVar0 = unk_0x4DDAC4C80BACF92C(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&uLocal_2593, 0.15f))
	{
		fLocal_2600 = (fVar0 - 0.35f);
		if (fLocal_2600 < 8f)
		{
			fLocal_2600 = 8f;
		}
		func_59(&uLocal_2593);
		unk_0xF706462DA6137097(iParam0, fLocal_2600);
		unk_0x05524C2A43660E7F(iParam0, fLocal_2600);
	}
	return 1;
}

void func_199(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_122(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0x5AD02BBC63E31E46();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		unk_0xE2D24A37AFCF27BF(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0x4569EA65F1B056ED(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		unk_0x9B0169E27978C1A2(*iParam1, sParam0, sParam7, 1);
	}
}

int func_200()
{
	var uVar0;
	struct<3> Var1;
	
	func_210();
	switch (iLocal_3118)
	{
		case 0:
			if (bLocal_2965)
			{
				if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
				{
					Local_2996[0 /*20*/] = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_6, 26, uLocal_2989[0], 1, 1, 1);
					unk_0xBE91B077ADADE97F(Local_2996[0 /*20*/], 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_2996[0 /*20*/].f_1 = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_6, 26, iLocal_74, 2, 1, 1);
					unk_0xBE91B077ADADE97F(Local_2996[0 /*20*/].f_1, 1);
					unk_0x7B28A83A0D3DD0F9(Local_2996[0 /*20*/].f_1, 42, 1);
					func_257(&Local_2348, 6, Local_2996[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0x4261814A9A26E86F(Local_2996[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x4261814A9A26E86F(Local_2996[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
					{
						unk_0x5C052A30B9FCA449(Local_2996[0 /*20*/].f_6, 10);
					}
					bLocal_442 = true;
					func_257(&Local_2348, 0, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2966)
			{
				if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
				{
					Local_2996[0 /*20*/] = unk_0x42F3C85A00B4FC7B(Local_2996[0 /*20*/].f_6, 26, uLocal_2989[0], 0, 1, 1);
					unk_0xBE91B077ADADE97F(Local_2996[0 /*20*/], 1);
					unk_0x7B28A83A0D3DD0F9(Local_2996[0 /*20*/], 42, 1);
					func_257(&Local_2348, 2, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
					unk_0x4261814A9A26E86F(Local_2996[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_442 = true;
				}
			}
			else if (func_209())
			{
				bLocal_2964 = true;
			}
			else
			{
				bLocal_2964 = false;
			}
			iLocal_3118 = 1;
			break;
		
		case 1:
			if (bLocal_2965)
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
				{
					if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), unk_0xD6E677FAD7521410(Local_2996[0 /*20*/].f_6, 1), 15f, 15f, 15f, 0, 1, 0))
					{
						if (!iLocal_3136)
						{
							if (func_171(&Local_2348, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_3136 = 1;
							}
						}
					}
				}
			}
			if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
			{
				if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6) || func_208(iLocal_3109, Local_2996[0 /*20*/].f_6, !(bLocal_2965 || bLocal_2966)))
				{
					if (func_208(iLocal_3109, Local_2996[0 /*20*/].f_6, !(bLocal_2965 || bLocal_2966)))
					{
						bLocal_2979 = true;
					}
					if (!bLocal_2966)
					{
						func_207(&uLocal_3103, 1f);
					}
					else
					{
						func_263(&uLocal_3103);
					}
				}
			}
			if (func_7(&uLocal_3103) && func_4(&uLocal_3103) > 1f)
			{
				if (bLocal_2965 && func_7(&uLocal_3103))
				{
					if (func_47())
					{
						func_172();
					}
					iLocal_2976 = 0;
					if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
					{
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0xCC5ED49CF9C9215F(0, 750, 0);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
						unk_0x4261814A9A26E86F(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
						unk_0x8D5B447F21217223(&uLocal_421);
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0xCC5ED49CF9C9215F(0, 0, 0);
						unk_0xB0C1A43193C25F7A(0, Local_2996[0 /*20*/], 0);
						unk_0x4261814A9A26E86F(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						unk_0x1DC2BF231DE6A016(0, Local_2996[0 /*20*/], 1000f, -1, 0, 0);
						unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_1, 0))
						{
							unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/].f_1, uLocal_421);
						}
						unk_0x8D5B447F21217223(&uLocal_421);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2966)
				{
					if ((Global_112293.f_19971.f_4 % 2) == 0)
					{
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
						{
							unk_0x5C679902079A7E80(&uLocal_421);
							unk_0xCC5ED49CF9C9215F(0, 0, 0);
							unk_0xF0ED372419FE0E70(0, iLocal_3109, 20000, 9f, 1f, 1073741824, 0);
							unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
							unk_0x4261814A9A26E86F(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
							unk_0x1BBD0A5729AB1226(uLocal_421);
							unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
							unk_0x8D5B447F21217223(&uLocal_421);
						}
						func_257(&Local_2348, 2, Local_2996[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
						{
							func_206(Local_2996[0 /*20*/]);
							unk_0xA415F00D0E0DFBCE(Local_2996[0 /*20*/], 0, 0);
							unk_0xA415F00D0E0DFBCE(Local_2996[0 /*20*/], 1, 0);
							unk_0x5C679902079A7E80(&uLocal_421);
							unk_0xCC5ED49CF9C9215F(0, 0, 0);
							unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
							unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
							unk_0x1BBD0A5729AB1226(uLocal_421);
							unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
							unk_0x8D5B447F21217223(&uLocal_421);
							if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/]))
							{
								uLocal_2986 = unk_0xB20BB447C131B310(Local_2996[0 /*20*/]);
								unk_0xFA3E6ADC3E5D386E(uLocal_2986, 1);
								unk_0xDD205B87CDFD0C1B(uLocal_2986, 0.7f);
								func_205(Local_2996[0 /*20*/], uLocal_2986, 1);
							}
							bLocal_2964 = true;
						}
						func_171(&Local_2348, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2964)
				{
					Local_2996[0 /*20*/] = unk_0x0FDCFECB2EF2BC1C(4, uLocal_2989[0], Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_9, 1, 1);
					unk_0xBE91B077ADADE97F(Local_2996[0 /*20*/], 1);
					unk_0x7B28A83A0D3DD0F9(Local_2996[0 /*20*/], 42, 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_PED_ANGR";
					bLocal_442 = false;
					if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
					{
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0xF0ED372419FE0E70(0, iLocal_3109, 20000, 15f, 3f, 1073741824, 0);
						unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
						unk_0x8D5B447F21217223(&uLocal_421);
					}
					iLocal_3118 = 3;
				}
				else
				{
					Local_2996[0 /*20*/] = unk_0x0FDCFECB2EF2BC1C(4, uLocal_2989[0], Local_650[iLocal_2604 /*23*/].f_6, Local_650[iLocal_2604 /*23*/].f_9, 1, 1);
					unk_0xBE91B077ADADE97F(Local_2996[0 /*20*/], 1);
					unk_0x7B28A83A0D3DD0F9(Local_2996[0 /*20*/], 42, 1);
					unk_0x46EDFC827DC67D89(Local_2996[0 /*20*/], 1, 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_ILLEG1";
					if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
					{
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0x1BA17238F2579830(0, unk_0x7D2B9E6A64637269(), 20000, 12f, 0f, 3f, 0);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
						unk_0x8D5B447F21217223(&uLocal_421);
					}
					iLocal_3118 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_2965)
			{
				if (!bLocal_2973)
				{
					if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6) || bLocal_2979)
					{
						if (!unk_0x123480158F10FA67())
						{
							if (!func_47())
							{
								if (func_171(&Local_2348, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2973 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
			{
				if (!unk_0xC49311A2A500FF09(Local_2996[0 /*20*/], 0))
				{
					if (bLocal_2966)
					{
						if (!func_47())
						{
							if (unk_0x4E8DA737B686529A(Local_2996[0 /*20*/], 242628503) == 1)
							{
								if (unk_0x507B30DD5CDF782F(Local_2996[0 /*20*/]) == 2)
								{
									if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
									{
										Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
									}
									if (SYSTEM::VDIST2(Var1, unk_0xD6E677FAD7521410(Local_2996[0 /*20*/], 1)) < 400f)
									{
										if ((Global_112293.f_19971.f_4 % 2) == 0)
										{
											func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3118 = 8;
								}
							}
						}
					}
					else if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
					{
						if (func_204() || (!unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6) && !bLocal_2979))
						{
							func_172();
							iLocal_3118 = 5;
						}
						else if (!unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6) && bLocal_2979)
						{
							if (bLocal_2973)
							{
								if (!func_47())
								{
									iLocal_3118 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
			{
				if (func_119(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 1) < 12f)
				{
					unk_0xCA089CD1A17D76DF(Local_2996[0 /*20*/]);
					if (bLocal_2964)
					{
						unk_0x9DA29013F33252A6(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 0, 16);
					}
					else if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
					{
						unk_0x5C679902079A7E80(&uLocal_421);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
						unk_0x4261814A9A26E86F(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_421);
						unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uLocal_421);
						unk_0x8D5B447F21217223(&uLocal_421);
					}
					iLocal_2949 = 1;
					if (bLocal_2965)
					{
						iLocal_3118 = 5;
					}
					else
					{
						iLocal_3118 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/]))
			{
				Local_2996[0 /*20*/].f_9 = unk_0xB20BB447C131B310(Local_2996[0 /*20*/]);
				if (bLocal_2964)
				{
					unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_9, 1);
					unk_0xDD205B87CDFD0C1B(Local_2996[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					unk_0xFA3E6ADC3E5D386E(Local_2996[0 /*20*/].f_9, 3);
					unk_0xDD205B87CDFD0C1B(Local_2996[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_2964)
			{
				if (iLocal_420 == 0)
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_203(Local_2348, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 2, Local_2996[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_203(Local_2348, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
				func_257(&Local_2348, 3, Local_2996[0 /*20*/], sLocal_2624, 0, 1);
				func_203(Local_2348, "TOWAUD", sLocal_2618, 0);
			}
			bLocal_2957 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_2964)
			{
				func_59(&uLocal_3097);
				iLocal_3118 = 6;
			}
			else
			{
				iLocal_3118 = 5;
			}
			break;
		
		case 5:
			if (!func_47())
			{
				if (bLocal_2965)
				{
					SYSTEM::SETTIMERB(0);
				}
				func_59(&uLocal_3097);
				if ((!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0)) && !unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
				{
					if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						unk_0x573C7DCF0ED57602(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
						{
							unk_0x5C052A30B9FCA449(Local_2996[0 /*20*/].f_6, 1);
						}
						unk_0x8D5B447F21217223(&uVar0);
						unk_0x5C679902079A7E80(&uVar0);
						unk_0x95CA4545D0C61309(0, Local_2996[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
						unk_0x0509CE092AC81B7C(0, Local_2996[0 /*20*/].f_6, 5f, 786597);
						unk_0x1BBD0A5729AB1226(uVar0);
						if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
						{
							unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uVar0);
						}
						unk_0x8D5B447F21217223(&uVar0);
						bLocal_3137 = true;
					}
				}
				iLocal_3118 = 6;
			}
			break;
		
		case 6:
			func_201(0);
			if (!bLocal_2971)
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
				{
					if (!unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
					{
						if (bLocal_2965)
						{
							if (SYSTEM::TIMERB() > 8000)
							{
								func_59(&uLocal_3097);
								if (!bLocal_3137)
								{
									unk_0x5C052A30B9FCA449(Local_2996[0 /*20*/].f_6, 1);
									unk_0x95CA4545D0C61309(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
								}
								iLocal_3118 = 7;
							}
						}
						else
						{
							func_59(&uLocal_3097);
							unk_0x5C052A30B9FCA449(Local_2996[0 /*20*/].f_6, 1);
							unk_0x95CA4545D0C61309(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0);
							iLocal_3118 = 7;
						}
					}
					else if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
					{
						if (SYSTEM::TIMERB() > 7000)
						{
							if (!bLocal_2964)
							{
								if (unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
								{
									if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
									{
										if (unk_0x4DDAC4C80BACF92C(iLocal_3109) < 2f)
										{
											if (unk_0x4E8DA737B686529A(Local_2996[0 /*20*/], -258271821) != 1)
											{
												unk_0x0509CE092AC81B7C(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0x8D5B447F21217223(&uVar0);
											unk_0x5C679902079A7E80(&uVar0);
											unk_0xCC5ED49CF9C9215F(0, 5000, 4096);
											unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
											unk_0x1BBD0A5729AB1226(uVar0);
											if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
											{
												unk_0x8A1AC8EBC73850C8(Local_2996[0 /*20*/], uVar0);
											}
											unk_0x8D5B447F21217223(&uVar0);
											iLocal_3118 = 7;
										}
									}
								}
								else if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0))
								{
									if (unk_0x4DDAC4C80BACF92C(iLocal_3109) < 5f)
									{
										if (unk_0x4E8DA737B686529A(Local_2996[0 /*20*/], -1794415470) != 1)
										{
											if (unk_0x9B73EB6255D4AE81(Local_2996[0 /*20*/].f_6, -1, 0))
											{
												unk_0x95CA4545D0C61309(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, -1, -1, 1073741824, 1, 0);
											}
										}
									}
									else if (unk_0x4E8DA737B686529A(Local_2996[0 /*20*/], 1056466932) != 1)
									{
										unk_0x573C7DCF0ED57602(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_201(1);
			if (unk_0xC49311A2A500FF09(Local_2996[0 /*20*/], 0) && !unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6))
			{
				if (bLocal_2964)
				{
					sLocal_2618 = "TOW_PED_ANTH";
				}
				else if (bLocal_2965)
				{
					sLocal_2618 = "TOW_ILLEG_SE";
				}
				bLocal_2970 = true;
				func_171(&Local_2348, "TOWAUD", sLocal_2618, 9, 0, 0, 0);
				bLocal_2957 = false;
				unk_0x0509CE092AC81B7C(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 5f, 786597);
				iLocal_3118 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_2949 = 0;
			bLocal_2957 = false;
			if (unk_0x575B7C28D81C0B4D(Local_2996[0 /*20*/].f_9))
			{
				unk_0x1AD5BCFEC31BB8D9(&(Local_2996[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_201(bool bParam0)
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_119(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_3109, 0) && !unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
		{
			if (unk_0xF2C5E5F021DB1E93(iLocal_3109, Local_2996[0 /*20*/].f_6) && !unk_0xF41EB7643E61A928(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
	{
		if (unk_0xA6E8FBD68548675F(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 1) || unk_0xA6E8FBD68548675F(unk_0x7D2B9E6A64637269(), Local_2996[0 /*20*/], 1))
		{
			func_59(&uLocal_3097);
			unk_0xA5030CC1B9A0FDA6(Local_2996[0 /*20*/]);
			unk_0xA5030CC1B9A0FDA6(unk_0x7D2B9E6A64637269());
		}
	}
	if (unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
	{
		iLocal_3118 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_3097) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)))
	{
		if (bLocal_2964)
		{
			func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2965)
		{
			func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_257(&Local_2348, 6, Local_2996[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2980[0] = Local_2996[0 /*20*/];
		uLocal_2980[1] = Local_2996[0 /*20*/].f_1;
		bLocal_2971 = true;
		func_202(Local_2348, "TOWAUD", sVar2, &uLocal_2980, 0);
		unk_0x1AD5BCFEC31BB8D9(&(Local_2996[0 /*20*/].f_9));
		if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/], 0))
		{
			unk_0xCA089CD1A17D76DF(Local_2996[0 /*20*/]);
			unk_0x1DC2BF231DE6A016(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
		}
		iLocal_3118 = 8;
	}
}

int func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_118((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_171(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_203(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)
{
	if (bParam167)
	{
		unk_0x75B41F5020877259(0);
	}
	StringCopy(&cLocal_272, sParam165, 16);
	StringCopy(&cLocal_276, sParam166, 16);
	Local_96 = { Param0 };
}

int func_204()
{
	switch (iLocal_3121)
	{
		case 0:
			if (unk_0x507B30DD5CDF782F(Local_2996[0 /*20*/]) >= 1 && !unk_0x123480158F10FA67())
			{
				iLocal_3121 = 1;
			}
			break;
		
		case 1:
			if (bLocal_2973 && !iLocal_2974)
			{
				if (!func_47())
				{
					if (!iLocal_2975)
					{
						if (!bLocal_2979)
						{
							func_115("TOWT_OBJ_06", 7500, 1);
							iLocal_2975 = 1;
						}
					}
					if (iLocal_2975 && !unk_0x123480158F10FA67())
					{
						if (unk_0x4E8DA737B686529A(Local_2996[0 /*20*/], -875674219) != 1)
						{
							unk_0xB0C1A43193C25F7A(Local_2996[0 /*20*/], Local_2996[0 /*20*/].f_1, 0);
						}
						iLocal_2974 = 1;
						iLocal_3121 = 2;
					}
				}
			}
			if (func_118(Local_2996[0 /*20*/], 1) > 20f)
			{
				unk_0x75B41F5020877259(1);
				return 1;
			}
			break;
		
		case 2:
			if (func_118(Local_2996[0 /*20*/], 1) > 20f)
			{
				unk_0x75B41F5020877259(1);
				return 1;
			}
			if (!func_47())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_205(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_280[iVar0 /*3*/] == iParam0 && !unk_0x575B7C28D81C0B4D(Local_280[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0x575B7C28D81C0B4D(Local_280[iVar0 /*3*/].f_1))
		{
			Local_280[iVar0 /*3*/] = iParam0;
			Local_280[iVar0 /*3*/].f_1 = uParam1;
			Local_280[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_206(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			unk_0x095503B9F1CAC814(iParam0, 1);
			unk_0x52261CF13B75FFA8(iParam0, 1);
			unk_0xA415F00D0E0DFBCE(iParam0, 23, 0);
			unk_0xEA480A62F5D29812(iParam0, 2);
			unk_0xD82D50E4AC0D46B9(iParam0, joaat("weapon_microsmg"), 1000, 1, 1);
			unk_0xA1217FA3D209873F(iParam0, 500);
		}
	}
}

void func_207(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_60(uParam0, fParam1);
	}
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (unk_0xD8CCA4EAA59D74BF(unk_0x638BDC79E655C1C2()) && func_118(uParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0x83B12E293561B796(iParam0, uParam1))
	{
		iVar0 = 1;
	}
	if (unk_0xA6E8FBD68548675F(iParam1, unk_0x7D2B9E6A64637269(), 1))
	{
		iVar0 = 1;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_209()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!iLocal_2946)
	{
		if (unk_0x419E13582192CFEA(Local_2996[0 /*20*/].f_6))
		{
			if (!unk_0xE50EB54E0F21BED0(Local_2996[0 /*20*/].f_6, 0))
			{
				Var3 = { unk_0xD6E677FAD7521410(Local_2996[0 /*20*/].f_6, 1) };
			}
		}
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		}
		if (bLocal_2965)
		{
			if (SYSTEM::VDIST2(Var0, Var3) < 25f)
			{
				unk_0x75B41F5020877259(1);
				if (!func_47())
				{
					unk_0x8ADA462BC5F42FD8(Local_2996[0 /*20*/], unk_0x7D2B9E6A64637269(), 5000, 0, 2);
					func_257(&Local_2348, 5, Local_2996[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_171(&Local_2348, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_2946 = 1;
					}
				}
			}
		}
	}
}

int func_211(var uParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(uParam1))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (!unk_0xC49311A2A500FF09(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_434))
	{
		func_59(&uLocal_434);
	}
	if (func_118(uParam0, 0) < 15f)
	{
		fLocal_431 = 0.3f;
		fLocal_432 = 0.5f;
		fLocal_433 = 0.1f;
	}
	else if (func_118(uParam0, 0) < 40f)
	{
		fLocal_431 = 0.6f;
		fLocal_432 = 1f;
		fLocal_433 = 0.2f;
	}
	if (func_3(&uLocal_434, unk_0x644B8DBA4F69BB73(fLocal_431, fLocal_432)))
	{
		func_59(&uLocal_434);
		unk_0xBC5268D1B5C5B73B(uParam0, 1, 0f, 0f, fLocal_433, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_212()
{
	unk_0xDA81FB7770247CC0();
	func_213();
}

void func_213()
{
	Global_22531.f_134 = 1;
}

int func_214(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (iLocal_2601 != 12)
	{
		func_218(Param2, uParam0, uParam1);
	}
	if (!bLocal_467)
	{
		if (iLocal_2601 >= 6 && iLocal_2601 <= 11)
		{
			if (bParam26)
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, 1, 1, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2601)
		{
			case 0:
				if (func_123(uParam1, uParam0, &iLocal_2603, 10, 90f, 100f, 0))
				{
					unk_0xED4E91A1FC7ABBF6(uParam1, 0);
					func_257(&Local_2348, 3, *uParam27, "TONYA", 0, 1);
					func_257(&Local_2348, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2601 = 1;
				}
				break;
			
			case 1:
				if (!func_47())
				{
					func_105("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_2601 = 2;
				}
				break;
			
			case 2:
				if (iLocal_468)
				{
					unk_0x66AE54CE92457FEE(1);
					iLocal_2601 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || func_119(uParam0, uParam1, 1) < 15f) && func_119(uParam0, uParam1, 1) < 30f) && !func_47())
					{
						func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2601 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_468)
				{
					if (!func_47() && !func_111("TOW_TUT_03"))
					{
						func_217("TOW_TUT_02");
						iLocal_2601 = 4;
					}
				}
				else
				{
					iLocal_2601 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 5000 || iLocal_468)
				{
					if ((SYSTEM::TIMERA() > 12000 || func_119(uParam0, uParam1, 1) < 7.5f) || (iLocal_468 && func_119(uParam0, uParam1, 1) < 30f))
					{
						iLocal_443 = 1;
						iLocal_443 = iLocal_443;
						func_217("TOW_TUT_01");
						iLocal_2601 = 5;
					}
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_2601 = 6;
				}
				break;
			
			case 6:
				if ((!func_47() && !unk_0x123480158F10FA67()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_460)
					{
						func_105("TOWT_HELP_CR", -1);
						iLocal_460 = 1;
					}
				}
				if (unk_0x8954E9D0A9F6F8CF(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0x575B7C28D81C0B4D(*uParam22))
					{
						unk_0x13CC211F9F7ACE7F(*uParam22, 0);
						unk_0x1AD5BCFEC31BB8D9(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_430 = func_9(Param2.f_14, 0);
					*uParam22 = unk_0x27E44C95E1D1461C(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2601 = 7;
				}
				break;
			
			case 7:
				if (!func_47())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						func_115("TOW_TUT_04A", 7500, 1);
						iLocal_2601 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2601 = 10;
				}
				if (!func_47())
				{
					if (unk_0x8954E9D0A9F6F8CF(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_470 = unk_0xDFB7BFA6482FEE1E();
						if (bLocal_444)
						{
							unk_0x13CC211F9F7ACE7F(*uParam22, 0);
							unk_0x1AD5BCFEC31BB8D9(uParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_430 = func_9(Param2.f_14, 0);
							*uParam22 = unk_0x27E44C95E1D1461C(Param2.f_14);
						}
						if (unk_0x575B7C28D81C0B4D(*uParam22))
						{
							unk_0xFA3E6ADC3E5D386E(*uParam22, 5);
						}
						iLocal_2601 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (unk_0x8954E9D0A9F6F8CF(uParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_105("TOWT_HELP_UH", -1);
					func_216();
					if (!unk_0xE50EB54E0F21BED0(uParam0, 0) && !unk_0xE50EB54E0F21BED0(uParam1, 0))
					{
						if (unk_0xF2C5E5F021DB1E93(iParam0, iParam1))
						{
							iLocal_2601 = 11;
						}
					}
				}
				else
				{
					func_215();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (unk_0x8954E9D0A9F6F8CF(iParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_105("TOWT_HELP_UH", -1);
					func_216();
				}
				if (((unk_0x419E13582192CFEA(iParam0) && unk_0x419E13582192CFEA(iParam1)) && !unk_0xE50EB54E0F21BED0(iParam0, 0)) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
				{
					if (!unk_0xF2C5E5F021DB1E93(iParam0, iParam1))
					{
						unk_0x66AE54CE92457FEE(1);
						unk_0x1036762BD3781C84();
						func_146(&uLocal_399, 0, 0);
						iLocal_2601 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((unk_0x419E13582192CFEA(iParam0) && unk_0x419E13582192CFEA(iParam1)) && !unk_0xE50EB54E0F21BED0(iParam0, 0)) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
			{
				if (unk_0xF2C5E5F021DB1E93(iParam0, iParam1) && !bLocal_2602)
				{
					if (func_47())
					{
						if (unk_0xE8FFE38E2BA32BD6())
						{
							unk_0x66AE54CE92457FEE(1);
						}
						func_172();
						iLocal_2601 = 6;
					}
					else
					{
						func_107(*uParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2601 = 6;
						func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2602 = true;
					}
				}
			}
			if (!iLocal_462)
			{
				if (bLocal_2602)
				{
					if (!func_47())
					{
						unk_0x66AE54CE92457FEE(1);
						func_115("TOWT_OBJ_06", 7500, 1);
						iLocal_462 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_215()
{
	switch (iLocal_476)
	{
		case 0:
			if (!func_7(&uLocal_2525))
			{
				func_263(&uLocal_2525);
			}
			else if (func_4(&uLocal_2525) > 10f)
			{
				if (func_171(&uLocal_484, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_476 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_47())
			{
				if (func_171(&uLocal_484, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&uLocal_2525);
					iLocal_476 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_2525))
			{
				if (func_4(&uLocal_2525) > 15f)
				{
					if (!func_47())
					{
						if (func_171(&uLocal_484, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_476 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_216()
{
	if (!iLocal_459)
	{
		if (!unk_0x123480158F10FA67())
		{
			if (!func_47())
			{
				if (func_171(&uLocal_484, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_459 = 1;
				}
			}
		}
	}
}

void func_217(char* sParam0)
{
	SYSTEM::SETTIMERA(0);
	func_105(sParam0, -1);
}

void func_218(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, int iParam21)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (!unk_0x419E13582192CFEA(uParam20) || !unk_0x419E13582192CFEA(uParam21))
	{
		return;
	}
	if (unk_0xE50EB54E0F21BED0(iParam20, 0) || unk_0xE50EB54E0F21BED0(iParam21, 0))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var3 = { Param0.f_10 };
		uVar6 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var3 = { Param0.f_3 };
		uVar6 = Param0.f_6;
	}
	if (!iLocal_445)
	{
		if (unk_0x8954E9D0A9F6F8CF(iParam21, Var0, Var3, uVar6, 0, 1, 0))
		{
			if (!unk_0xE50EB54E0F21BED0(iParam20, 0) && !unk_0xE50EB54E0F21BED0(iParam21, 0))
			{
				if (!unk_0xF2C5E5F021DB1E93(iParam20, iParam21))
				{
					unk_0x66AE54CE92457FEE(1);
					unk_0x1036762BD3781C84();
					iLocal_2601 = 12;
					iLocal_445 = 1;
				}
			}
		}
	}
}

int func_219(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(uParam1))
	{
		iVar0 = (*uParam2 - unk_0x5E7C0A485B91DB87(iParam1));
	}
	if (fLocal_428 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
			{
				if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam1, 0)) || unk_0xA6E8FBD68548675F(iParam1, unk_0x7D2B9E6A64637269(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0x419E13582192CFEA(iParam1))
				{
					*uParam2 = unk_0x5E7C0A485B91DB87(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_171(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0x419E13582192CFEA(iParam1))
	{
		*uParam2 = unk_0x5E7C0A485B91DB87(iParam1);
	}
	return 0;
}

int func_220(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(uParam1))
	{
		iVar0 = (*uParam3 - unk_0x5E7C0A485B91DB87(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0x419E13582192CFEA(iParam1) && unk_0x419E13582192CFEA(uParam2))
			{
				if (!unk_0xE50EB54E0F21BED0(iParam1, 0) && !unk_0xE50EB54E0F21BED0(iParam2, 0))
				{
					if ((unk_0x83B12E293561B796(iParam1, iParam2) || unk_0xF2C5E5F021DB1E93(iParam2, iParam1)) || unk_0xA6E8FBD68548675F(iParam1, unk_0x7D2B9E6A64637269(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0x419E13582192CFEA(iParam1))
					{
						*uParam3 = unk_0x5E7C0A485B91DB87(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_222("TOW_DMG_01", 25, -1);
					func_221(func_26(), 1, 25);
					fLocal_428 = (fLocal_428 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_222("TOW_DMG_01", 75, -1);
					func_221(func_26(), 1, 75);
					fLocal_428 = (fLocal_428 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_105("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (unk_0x419E13582192CFEA(iParam1))
	{
		*uParam3 = unk_0x5E7C0A485B91DB87(iParam1);
	}
	return 1;
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	if (func_99(iParam0) == 3)
	{
		return 0;
	}
	if (func_99(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_99(iParam0), 0, iParam1, iParam2, 0);
}

void func_222(char* sParam0, int iParam1, int iParam2)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam2);
}

void func_223(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0x575B7C28D81C0B4D(*uParam1))
		{
			unk_0x1AD5BCFEC31BB8D9(uParam1);
		}
		*uParam5 = unk_0xDFB7BFA6482FEE1E();
		bLocal_467 = !func_224(uParam0);
		return;
	}
	else if (!unk_0x575B7C28D81C0B4D(*uParam1) && bLocal_467)
	{
		*uParam1 = unk_0xB20BB447C131B310(*uParam0);
		unk_0xFA3E6ADC3E5D386E(*uParam1, 3);
		unk_0x13CC211F9F7ACE7F(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_467)
		{
			if (!func_224(uParam0))
			{
				unk_0x4C4EBDF5C0D2DCB8();
				*uParam5 = unk_0xDFB7BFA6482FEE1E();
				if (bParam13)
				{
					if (iLocal_440)
					{
						func_115("DTRSHRD_03", 7500, 1);
						iLocal_440 = 0;
					}
					if (!unk_0x575B7C28D81C0B4D(*uParam1))
					{
						*uParam1 = unk_0xB20BB447C131B310(*uParam0);
						unk_0xFA3E6ADC3E5D386E(*uParam1, 3);
						unk_0x13CC211F9F7ACE7F(*uParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0x575B7C28D81C0B4D((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0x13CC211F9F7ACE7F((uParam2[iVar0 /*20*/])->f_8, 0);
						unk_0x1AD5BCFEC31BB8D9(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0x575B7C28D81C0B4D((uParam2[0 /*20*/])->f_9))
				{
					unk_0x1AD5BCFEC31BB8D9(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_467 = true;
			}
		}
		else if (func_224(uParam0))
		{
			if (unk_0x575B7C28D81C0B4D(*uParam1))
			{
				unk_0x1AD5BCFEC31BB8D9(uParam1);
			}
			if (!unk_0xECEC7528A52B4EE8((*uParam2)[0 /*20*/]))
			{
				if (!unk_0xF41EB7643E61A928((*uParam2)[0 /*20*/], *uParam0, 0) && !unk_0xF41EB7643E61A928((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0x575B7C28D81C0B4D((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0xB20BB447C131B310((*uParam2)[iVar0 /*20*/]);
						unk_0xFA3E6ADC3E5D386E((uParam2[0 /*20*/])->f_9, 3);
						unk_0xDD205B87CDFD0C1B((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_441)
			{
				func_115(sParam4, 7500, 1);
				iLocal_441 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0x575B7C28D81C0B4D((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x27E44C95E1D1461C(*(uParam3[0 /*3*/]));
					unk_0x13CC211F9F7ACE7F((uParam2[0 /*20*/])->f_8, 1);
				}
			}
			else if (bParam7)
			{
				if (!unk_0xE50EB54E0F21BED0((uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0x575B7C28D81C0B4D((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0xB20BB447C131B310((uParam2[iParam6 /*20*/])->f_6);
						unk_0xFA3E6ADC3E5D386E((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0x13CC211F9F7ACE7F((uParam2[0 /*20*/])->f_8, 1);
					}
				}
				else
				{
					if (iLocal_420 == 3)
					{
						Local_650[iLocal_2604 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!unk_0x575B7C28D81C0B4D((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x27E44C95E1D1461C(Local_650[iLocal_2604 /*23*/].f_1);
						unk_0xFA3E6ADC3E5D386E((uParam2[0 /*20*/])->f_8, 3);
						unk_0x13CC211F9F7ACE7F((uParam2[0 /*20*/])->f_8, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0xE50EB54E0F21BED0((uParam2[iVar0 /*20*/])->f_6, 0))
					{
						if (!unk_0x575B7C28D81C0B4D((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0xB20BB447C131B310((uParam2[iVar0 /*20*/])->f_6);
							unk_0xFA3E6ADC3E5D386E((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0x13CC211F9F7ACE7F((uParam2[iVar0 /*20*/])->f_8, 1);
						}
					}
					else
					{
						if (iLocal_420 == 3)
						{
							Local_650[iLocal_2604 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!unk_0x575B7C28D81C0B4D((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x27E44C95E1D1461C(Local_650[iLocal_2604 /*23*/].f_1);
							unk_0xFA3E6ADC3E5D386E((uParam2[0 /*20*/])->f_8, 3);
							unk_0x13CC211F9F7ACE7F((uParam2[0 /*20*/])->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_467 = false;
		}
	}
}

int func_224(var uParam0)
{
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0) != *uParam0)
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
	return 1;
}

void func_225()
{
	int iVar0;
	
	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_193();
	}
}

void func_226(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x2053F6ACFD4ED4BC() >= (uParam0->f_272 + uParam0->f_273) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2)) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
					{
						func_227(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x2053F6ACFD4ED4BC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_227(var uParam0)
{
	func_228(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_228(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 30))
	{
		switch (func_229(*uParam0))
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

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x234B68AC2E35ED5A(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_230()
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

void func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_254();
	uLocal_2608 = func_253();
	if (uParam0->f_3 == 3)
	{
		sLocal_2620[0] = "base";
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towingcome_here");
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2959)
	{
		func_251(&uLocal_2648, "Ped");
		func_251(&uLocal_2648, "oddjobs@towing");
		func_251(&uLocal_2648, "oddjobs@towingangryidle_a");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_a");
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	else if (bLocal_2959)
	{
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_251(&uLocal_2648, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_251(&uLocal_2648, sLocal_2619);
		func_249(&uLocal_2638, joaat("ambulance"));
		func_249(&uLocal_2638, joaat("s_m_m_paramedic_01"));
		sLocal_2620[0] = "react_big_variations_a";
		sLocal_2620[1] = "react_big_variations_b";
		sLocal_2620[2] = "react_big_variations_c";
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	unk_0x16C6E55F8C91ED24(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		unk_0x7C0019321F1FC821();
		func_251(&uLocal_2648, "oddjobs@towing");
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_249(&uLocal_2638, joaat("freightcont1"));
		func_249(&uLocal_2638, joaat("tankercar"));
		func_249(&uLocal_2638, joaat("freight"));
		func_249(&uLocal_2638, joaat("freightcar"));
		func_249(&uLocal_2638, joaat("s_m_m_lsmetro_01"));
		func_249(&uLocal_2638, joaat("a_f_m_bevhills_01"));
		func_249(&uLocal_2638, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_248();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_2987[iVar0] = Local_650[iLocal_2604 /*23*/].f_20;
	}
	else
	{
		func_247();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2987[iVar0] == 0)
		{
			iLocal_2987[iVar0] = func_245(&iLocal_2987, &iLocal_82, 10);
			unk_0x4DF8E7F8D8FB143A(iLocal_2987[iVar0], 3);
		}
		if (bLocal_2965)
		{
			iLocal_2987[iVar0] = joaat("landstalker");
			func_249(&uLocal_2638, iLocal_2987[iVar0]);
			unk_0x4DF8E7F8D8FB143A(iLocal_2987[iVar0], 3);
		}
		else if (iLocal_2987[iVar0] != 0)
		{
			func_249(&uLocal_2638, iLocal_2987[iVar0]);
			unk_0x4DF8E7F8D8FB143A(iLocal_2987[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2959 && iLocal_2962)
	{
		if (bLocal_2965)
		{
			func_244(&iVar1);
			iLocal_74 = joaat("a_m_m_tranvest_01");
			iLocal_74 = iLocal_74;
			func_249(&uLocal_2638, iLocal_74);
		}
		else if (bLocal_2966)
		{
			func_243(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_242(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_2965)
		{
			func_242(&iVar1, 1);
		}
		else
		{
			func_242(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_2989[iVar0] = func_245(&uLocal_2989, &iLocal_75, iVar1);
			if (uLocal_2989[iVar0] != 0)
			{
				func_249(&uLocal_2638, uLocal_2989[iVar0]);
			}
			iVar0++;
		}
	}
	func_249(&uLocal_2638, iLocal_649);
	func_241(&uLocal_2656, "TOW", 2, 0);
	func_241(&uLocal_2656, "DTRSHRD", 3, 0);
	func_240(&uLocal_2638);
	func_237(&uLocal_2648, &uLocal_2656);
	while (!unk_0xDAE4BC89A198A6AF(uLocal_2608))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	while (!func_236(&uLocal_2638) || !unk_0x0F4C16D9EAAF22F9(iLocal_2987[0]))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	while (!func_232(&uLocal_2656))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0x952AB441FA24BF16("SCRIPT\TOWING_TRAIN", false, -1) || !unk_0xB4C12EFC62A8536A())
		{
			func_226(&uLocal_2656);
			SYSTEM::WAIT(0);
		}
	}
	while (!unk_0x080D38ACEC5DC1A2(2) || !unk_0x080D38ACEC5DC1A2(3))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
}

bool func_232(var uParam0)
{
	return func_233(uParam0);
}

int func_233(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_234(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_234(var uParam0)
{
	return func_235(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_235(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(uParam0, 30))
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, 29))
		{
			switch (func_229(iParam0))
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
					return unk_0xAD9D75DD073BF477(uParam1);
					break;
				
				case 4:
					return unk_0x9CF7186A344D26A9(uParam2, uParam1);
					break;
				
				case 5:
					return unk_0x9745FAC5B3E4C8B8(uParam1);
					break;
				
				case 6:
					return unk_0x952AB441FA24BF16(uParam1, unk_0x234B68AC2E35ED5A(iParam0, 27), -1);
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

int func_236(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xA9C0BBFB9CBB66F1((*uParam0)[iVar0]))
			{
				if (!unk_0xA9C0BBFB9CBB66F1((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_237(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x4030103C8B148AFC((*uParam0)[iVar0]))
		{
			func_238(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_238(var uParam0, char* sParam1)
{
	func_239(uParam0, 1, -1, sParam1, 0);
}

void func_239(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
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

void func_240(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x16E516CA9C88FF48((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_241(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0x191DDA30577F440A(&uVar0, 26);
	}
	func_239(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_75[0] = joaat("a_m_y_genstreet_02");
		iLocal_75[1] = joaat("a_m_y_beach_03");
		iLocal_75[2] = joaat("g_m_y_salvagoon_01");
		iLocal_75[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_75[0] = joaat("a_f_m_bevhills_01");
		iLocal_75[1] = joaat("a_m_y_genstreet_02");
		iLocal_75[2] = joaat("a_f_y_hipster_02");
		iLocal_75[3] = joaat("a_m_y_beach_03");
		iLocal_75[4] = joaat("s_f_y_sweatshop_01");
		iLocal_75[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_243(var uParam0)
{
	iLocal_75[0] = joaat("a_m_m_tramp_01");
	iLocal_75[1] = joaat("a_m_y_methhead_01");
	iLocal_75[2] = joaat("a_m_m_tramp_01");
	iLocal_75[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_244(var uParam0)
{
	iLocal_75[0] = joaat("a_m_y_yoga_01");
	iLocal_75[1] = joaat("a_m_y_beach_03");
	iLocal_75[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_245(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0xB36B8558948EA7A8(0, (iParam2 - 1));
	while (func_246((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = unk_0xB36B8558948EA7A8(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_246(int iParam0, var uParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_247()
{
	iLocal_82[0] = joaat("tailgater");
	iLocal_82[1] = joaat("asterope");
	iLocal_82[2] = joaat("primo");
	iLocal_82[3] = joaat("primo");
	iLocal_82[4] = joaat("schwarzer");
	iLocal_82[5] = joaat("emperor");
	iLocal_82[6] = joaat("premier");
	iLocal_82[7] = joaat("buffalo");
	iLocal_82[8] = joaat("intruder");
	iLocal_82[9] = joaat("intruder");
}

void func_248()
{
	iLocal_82[0] = joaat("buccaneer");
	iLocal_82[1] = joaat("voodoo2");
	iLocal_82[2] = joaat("manana");
	iLocal_82[3] = joaat("ruiner");
	iLocal_82[4] = joaat("ruiner");
	iLocal_82[5] = joaat("voodoo2");
	iLocal_82[6] = joaat("surfer2");
	iLocal_82[7] = joaat("emperor2");
	iLocal_82[8] = joaat("stanier");
	iLocal_82[9] = joaat("tailgater");
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_250(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_250(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_251(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x4030103C8B148AFC((*uParam0)[iVar0]))
		{
			if (unk_0xDA654EB115F9FF7D((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_252(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_252(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x4030103C8B148AFC((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_253()
{
	return unk_0x42AA2CCF0B61DCD8("MIDSIZED_MESSAGE");
}

void func_254()
{
	func_300(&uLocal_412, 1);
}

void func_255()
{
	switch (iLocal_420)
	{
		case 2:
			if ((Global_112293.f_19971.f_4 % 2) == 0)
			{
				sLocal_2624 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2624 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2624 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_2965)
			{
			}
			else
			{
				sLocal_2624 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_2624 = "TOWTRAINM";
			break;
	}
}

int func_256()
{
	return Local_650[iLocal_2604 /*23*/].f_22;
}

void func_257(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0xECEC7528A52B4EE8(iParam2))
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

void func_258()
{
	iLocal_420 = func_260(Global_112293.f_19971.f_2);
	if (!func_259(iLocal_420))
	{
		iLocal_420 = 3;
	}
	if (iLocal_420 == 3)
	{
	}
	else
	{
		iLocal_2604 = func_262(1300f, iLocal_420, Global_112293.f_19971.f_9);
		Global_112293.f_19971.f_9 = iLocal_2604;
	}
	if (iLocal_2604 == 0)
	{
		iLocal_420 = 3;
	}
	Global_112293.f_19971.f_2 = iLocal_420;
}

int func_259(int iParam0)
{
	iLocal_2604 = func_262(1300f, iParam0, Global_112293.f_19971.f_9);
	if (iLocal_2604 == -1)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_112293.f_19971.f_4 < iVar0)
		{
			iVar0 = Global_112293.f_19971.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_112293.f_19971.f_6 < iVar0)
		{
			iVar0 = Global_112293.f_19971.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_112293.f_19971.f_5 < iVar0)
		{
			iVar0 = Global_112293.f_19971.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_112293.f_19971.f_7 < iVar0)
		{
			iVar0 = Global_112293.f_19971.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_112293.f_19971.f_8 < iVar0)
		{
			iVar0 = Global_112293.f_19971.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_261()
{
	if (Global_99370 == 10 || Global_99370 == 9)
	{
		return 1;
	}
	return 0;
}

int func_262(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar57;
	int iVar58;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53)
	{
		fVar2 = func_9(Local_650[iVar58 /*23*/].f_1, 1);
		if (!func_11(Local_650[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_650[iVar58 /*23*/] == iParam1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1)
	{
		iVar1 = iVar3[unk_0xB36B8558948EA7A8(0, (iVar57 - 1))];
	}
	else if (iVar57 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_263(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_59(uParam0);
	}
}

void func_264()
{
	Local_45[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_45[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_45[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	Local_45[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_45[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_45[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	Local_70[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_265(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_266(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_267()
{
	char* sVar0;
	
	if (iLocal_3115 < 16)
	{
		unk_0x1036762BD3781C84();
		unk_0x75B41F5020877259(1);
		func_300(&Global_110944, 3);
		switch (iLocal_3084)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!unk_0xAB6A270F84A8781E(sVar0))
		{
			func_270(sVar0);
		}
		func_269();
		func_271(unk_0x471C98FD94C0A5FD());
		while (!func_268())
		{
			SYSTEM::WAIT(0);
		}
		func_193();
	}
}

int func_268()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_99370 == 7 || Global_99370 == 8)
	{
		return 1;
	}
	return 0;
}

void func_269()
{
	Global_99405 = 1;
	if (unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
	}
	else if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 25);
	}
}

void func_270(char* sParam0)
{
	if (!unk_0xAB6A270F84A8781E(sParam0))
	{
		if (unk_0xA3A3E3B836DB6D5B(sParam0) <= 16)
		{
			StringCopy(&Global_77480, sParam0, 16);
			StringCopy(&Global_77484, "", 16);
			if (unk_0x2D54F00919E36B63())
			{
				unk_0xAD9DFA8200EA2A8A();
			}
		}
	}
}

void func_271(char* sParam0)
{
	if (Global_99370 != 12)
	{
		func_272(sParam0, 5, -1);
	}
}

int func_272(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_297();
	func_296();
	Global_99370 = 0;
	StringCopy(&(Global_99370.f_3), sParam0, 32);
	Global_99370.f_11 = iParam1;
	unk_0x767346F258162697(1);
	unk_0x095290E662CE0E24(0);
	unk_0xEC3BBBCF6440E579(0);
	func_292(1);
	func_290(1);
	func_287(0);
	func_286(1);
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 9);
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 6);
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 20);
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 21);
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 5);
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if (unk_0x020175C59CBE79DB(uVar0))
				{
					unk_0x191DDA30577F440A(&(Global_99370.f_20), 5);
				}
			}
		}
	}
	unk_0x66AE54CE92457FEE(1);
	unk_0x1036762BD3781C84();
	func_285(0);
	func_284(1);
	Global_99370.f_2 = Global_99407;
	if (func_283())
	{
		if (func_282())
		{
			if (Global_99407 >= func_279())
			{
				if (!unk_0x234B68AC2E35ED5A(Global_90158[iParam2 /*34*/].f_15, 16))
				{
					if (Global_112293.f_9083.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_93546 = 1;
					}
				}
			}
		}
		else if (Global_99370.f_11 == 6)
		{
			func_274(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_112293.f_18572[iParam2 /*6*/].f_4 >= 2)
				{
					Global_93546 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_273(unk_0x471C98FD94C0A5FD());
			if (iVar33 > -1)
			{
				if (Global_112293.f_24984.f_4[iVar33] >= 2)
				{
					Global_93546 = 1;
				}
			}
		}
	}
	return 1;
}

int func_273(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0xDA654EB115F9FF7D("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xDA654EB115F9FF7D("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_274(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_275(uParam1, "Abigail1", func_277(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 1:
			func_275(uParam1, "Abigail2", func_277(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 2:
			func_275(uParam1, "Barry1", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 3:
			func_275(uParam1, "Barry2", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 4:
			func_275(uParam1, "Barry3", func_277(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 5:
			func_275(uParam1, "Barry3A", func_277(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 6:
			func_275(uParam1, "Barry3C", func_277(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 7:
			func_275(uParam1, "Barry4", func_277(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_276(iParam0), 0, 0);
			break;
		
		case 8:
			func_275(uParam1, "Dreyfuss1", func_277(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 9:
			func_275(uParam1, "Epsilon1", func_277(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 10:
			func_275(uParam1, "Epsilon2", func_277(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 11:
			func_275(uParam1, "Epsilon3", func_277(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 12:
			func_275(uParam1, "Epsilon4", func_277(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 13:
			func_275(uParam1, "Epsilon5", func_277(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 14:
			func_275(uParam1, "Epsilon6", func_277(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 15:
			func_275(uParam1, "Epsilon7", func_277(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 16:
			func_275(uParam1, "Epsilon8", func_277(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 17:
			func_275(uParam1, "Extreme1", func_277(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 18:
			func_275(uParam1, "Extreme2", func_277(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 19:
			func_275(uParam1, "Extreme3", func_277(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 20:
			func_275(uParam1, "Extreme4", func_277(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 21:
			func_275(uParam1, "Fanatic1", func_277(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 22:
			func_275(uParam1, "Fanatic2", func_277(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 23:
			func_275(uParam1, "Fanatic3", func_277(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_276(iParam0), 0, 1);
			break;
		
		case 24:
			func_275(uParam1, "Hao1", func_277(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_276(iParam0), 0, 1);
			break;
		
		case 25:
			func_275(uParam1, "Hunting1", func_277(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 26:
			func_275(uParam1, "Hunting2", func_277(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 27:
			func_275(uParam1, "Josh1", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 28:
			func_275(uParam1, "Josh2", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 29:
			func_275(uParam1, "Josh3", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 30:
			func_275(uParam1, "Josh4", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 31:
			func_275(uParam1, "Maude1", func_277(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 32:
			func_275(uParam1, "Minute1", func_277(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 33:
			func_275(uParam1, "Minute2", func_277(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 34:
			func_275(uParam1, "Minute3", func_277(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 35:
			func_275(uParam1, "MrsPhilips1", func_277(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 36:
			func_275(uParam1, "MrsPhilips2", func_277(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 37:
			func_275(uParam1, "Nigel1", func_277(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 38:
			func_275(uParam1, "Nigel1A", func_277(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 39:
			func_275(uParam1, "Nigel1B", func_277(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 40:
			func_275(uParam1, "Nigel1C", func_277(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 41:
			func_275(uParam1, "Nigel1D", func_277(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 42:
			func_275(uParam1, "Nigel2", func_277(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 43:
			func_275(uParam1, "Nigel3", func_277(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 44:
			func_275(uParam1, "Omega1", func_277(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 45:
			func_275(uParam1, "Omega2", func_277(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 46:
			func_275(uParam1, "Paparazzo1", func_277(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 47:
			func_275(uParam1, "Paparazzo2", func_277(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 48:
			func_275(uParam1, "Paparazzo3", func_277(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 49:
			func_275(uParam1, "Paparazzo3A", func_277(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 50:
			func_275(uParam1, "Paparazzo3B", func_277(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 51:
			func_275(uParam1, "Paparazzo4", func_277(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 52:
			func_275(uParam1, "Rampage1", func_277(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 54:
			func_275(uParam1, "Rampage3", func_277(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 55:
			func_275(uParam1, "Rampage4", func_277(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 56:
			func_275(uParam1, "Rampage5", func_277(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 53:
			func_275(uParam1, "Rampage2", func_277(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 57:
			func_275(uParam1, "TheLastOne", func_277(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 58:
			func_275(uParam1, "Tonya1", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 59:
			func_275(uParam1, "Tonya2", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 60:
			func_275(uParam1, "Tonya3", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 61:
			func_275(uParam1, "Tonya4", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 62:
			func_275(uParam1, "Tonya5", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_275(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_276(int iParam0)
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

struct<2> func_277(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_278(iParam0) };
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

struct<2> func_278(int iParam0)
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

int func_279()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_280(&(Global_99370.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_280(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x15173FB88ABC94F9(uParam0);
	iVar1 = func_281(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_281(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_90158[iVar0 /*34*/].f_6 == iParam0)
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

int func_282()
{
	if ((((Global_99370.f_11 == 0 || Global_99370.f_11 == 1) || Global_99370.f_11 == 2) || Global_99370.f_11 == 3) || Global_99370.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	if ((((Global_99370.f_11 == 0 || Global_99370.f_11 == 1) || Global_99370.f_11 == 2) || Global_99370.f_11 == 6) || Global_99370.f_11 == 3)
	{
		return 1;
	}
	if (Global_99370.f_11 == 5)
	{
		if (func_273(&(Global_99370.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_42558 = 1;
	}
	else
	{
		Global_42558 = 0;
	}
}

void func_285(int iParam0)
{
	unk_0x4200138CBB376D4D(iParam0);
	unk_0xDD7C2F9844E745B1(iParam0);
}

void func_286(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x97B846780E2A8C66();
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 3);
	}
	else if (unk_0x234B68AC2E35ED5A(Global_99370.f_20, 3))
	{
		unk_0xE1AA8B5D9066529D();
		unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 3);
	}
}

void func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_99370.f_20, 4))
		{
			func_289();
			unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 4);
		}
	}
	else
	{
		func_288();
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 4);
	}
}

void func_288()
{
	Global_22531.f_5 = 1;
}

void func_289()
{
	Global_22531.f_5 = 0;
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		func_291();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_162(0))
		{
			func_292(0);
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

void func_291()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

void func_292(int iParam0)
{
	if (func_295())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_294())
		{
			func_293(1, 1);
		}
		else
		{
			func_293(0, 0);
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
	if (!func_23())
	{
		Global_19798.f_1 = 3;
	}
}

void func_293(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_162(0))
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

bool func_294()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_295()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_296()
{
	Global_93546 = 0;
	Global_93547 = 0;
}

void func_297()
{
	Global_99370 = 13;
	Global_99370.f_1 = -1;
	Global_99370.f_2 = 0;
	Global_99370.f_30 = 0f;
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 25);
	Global_99404 = 0;
	func_284(0);
	func_299();
	func_298();
	Global_99370.f_18 = -1;
	Global_99370.f_19 = -1;
}

void func_298()
{
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 22);
	unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 8);
}

void func_299()
{
	if (Global_99370.f_16 != 0)
	{
		unk_0x3D9BC07C93913E04(&(Global_99370.f_16));
		Global_99370.f_16 = 0;
	}
	if (Global_99370.f_17 != 0)
	{
		unk_0x3D9BC07C93913E04(&(Global_99370.f_17));
		Global_99370.f_17 = 0;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_302()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

