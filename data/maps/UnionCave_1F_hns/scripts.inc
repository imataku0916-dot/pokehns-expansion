UnionCave_1F_hns_MapScripts::
	.byte 0


UnionCave_1F_Trigger_Monview::
	special SpawnCameraObject
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	message Route29_Text_PressAorB
	waitbuttonpress
	closemessage
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	special RemoveCameraObject
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	end


UnionCave_1F_EventScript_HikerRussell::
	trainerbattle_single TRAINER_RUSSELL_HNS, UnionCave_1F_Text_HikerRussellSeen, UnionCave_1F_Text_HikerRussellBeaten
	msgbox UnionCave_1F_Text_HikerRussellAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_PokemaniacLarry::
	trainerbattle_single TRAINER_LARRY_HNS, UnionCave_1F_Text_PokemaniacLarrySeen, UnionCave_1F_Text_PokemaniacLarryBeaten
	msgbox UnionCave_1F_Text_PokemaniacLarryAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_HikerDaniel::
	trainerbattle_single TRAINER_DANIEL_HNS, UnionCave_1F_Text_HikerDanielSeen, UnionCave_1F_Text_HikerDanielBeaten
	msgbox UnionCave_1F_Text_HikerDanielAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_FirebreatherBill::
	trainerbattle_single TRAINER_BILL_HNS, UnionCave_1F_Text_FirebreatherBillSeen, UnionCave_1F_Text_FirebreatherBillBeaten
	msgbox UnionCave_1F_Text_FirebreatherBillAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_FirebreatherRay::
	trainerbattle_single TRAINER_RAY_HNS, UnionCave_1F_Text_FirebreatherRaySeen, UnionCave_1F_Text_FirebreatherRayBeaten
	msgbox UnionCave_1F_Text_FirebreatherRayAfter, MSGBOX_AUTOCLOSE
	end	

UnionCave_1F_EventScript_Item_Potion::
	finditem ITEM_POTION
	end

UnionCave_1F_EventScript_Item_GreatBall::
	finditem ITEM_GREAT_BALL
	end

UnionCave_1F_EventScript_Item_Xattack::
	finditem ITEM_X_ATTACK
	end

UnionCave_1F_EventScript_Item_Awakening::
	finditem ITEM_AWAKENING
	end

UnionCave_1F_Text_HikerRussellSeen:
	.string "{JPN}ヒワダへむかってるんだね？\p"
	.string "ぼくのポケモンにきみがしょうぶでき\n"
	.string "るじつりょくがあるかたしかめさせて\l"
	.string "くれ。$"

UnionCave_1F_Text_HikerRussellBeaten:
	.string "{JPN}おおおおおおっ！$"

UnionCave_1F_Text_HikerRussellAfter:
	.string "{JPN}よしきめた！\p"
	.string "ぼくのポケモンがもっとつよくなるま\n"
	.string "ではここをはなれないぞ！$"

UnionCave_1F_Text_PokemaniacLarrySeen:
	.string "{JPN}ぼくはポケモンをさがしてあちこちを\n"
	.string "たびしているんだ。\p"
	.string "きみもポケモンをさがしているの？\p"
	.string "それならきみはぼくのコレクションの\n"
	.string "ライバルだね！$"

UnionCave_1F_Text_PokemaniacLarryBeaten:
	.string "{JPN}ううっ。かわいそうなポケモン……$"

UnionCave_1F_Text_PokemaniacLarryAfter:
	.string "{JPN}ときおりどうくつのおくふかくからポ\n"
	.string "ケモンのほうこうがきこえてくること\l"
	.string "がある。$"

UnionCave_1F_Text_HikerDanielSeen:
	.string "{JPN}うわっ！なんておどろきだ！\p"
	.string "ここでだれかにあえるなんておもって\n"
	.string "もみなかった！$"

UnionCave_1F_Text_HikerDanielBeaten:
	.string "{JPN}うわっ！かんぺきにまけた！$"

UnionCave_1F_Text_HikerDanielAfter:
	.string "{JPN}だまされてヤドンテールをかわされて\n"
	.string "しまった。\p"
	.string "かわいそうなポケモンがきのどくだ。$"

UnionCave_1F_Text_FirebreatherBillSeen:
	.string "{JPN}ズバットのちょうおんぱのせいでぼく\n"
	.string "のポケモンがこんらんしちゃうんだ。\p"
	.string "それにはマジではらがたつよ！$"

UnionCave_1F_Text_FirebreatherBillBeaten:
	.string "{JPN}もえつきたぜ！$"

UnionCave_1F_Text_FirebreatherBillAfter:
	.string "{JPN}しゅうまつになるとどうくつのおくふ\n"
	.string "かくからきみょうなほうこうがきこえ\l"
	.string "てくる。$"

UnionCave_1F_Text_FirebreatherRaySeen:
	.string "{JPN}あかるければどうくつなんてこわくな\n"
	.string "い。\p"
	.string "つよければポケモンなんてこわくない\n"
	.string "。$"

UnionCave_1F_Text_FirebreatherRayBeaten:
	.string "{JPN}ピカーッ！$"

UnionCave_1F_Text_FirebreatherRayAfter:
	.string "{JPN}このどうくつをてらしているのはぼく\n"
	.string "のポケモンのほのおだ。$"
