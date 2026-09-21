OlivineCity_Lighthouse_hns_MapScripts::
	.byte 0

OlivineLighthouse_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

OlivineLighthouse_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

OlivineLighthouse_EventScript_Item_TMSwagger::
    finditem ITEM_TM_SWAGGER
    end

OlivineLighthouse_EventScript_Item_HyperPotion::
    finditem ITEM_HYPER_POTION
    end

OlivineLighthouse_EventScript_Item_Protein::
    finditem ITEM_PROTEIN
    end

OlivineLighthouse_EventScript_1FSailor::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_1FSailor, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_EventScript_1FPokefanF::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_1FPokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_1FSailor:
	.string "People train at this LIGHTHOUSE.\p"
	.string "It's not easy to climb with all\n"
	.string "the trainers waiting inside.$"

OlivineLighthouse_Text_1FPokefanF:
	.string "In the past, POKéMON used to light\n"
	.string "the sea around OLIVINE at night.\p"
	.string "The LIGHTHOUSE was built in honor\n"
	.string "of those noble POKéMON.$"

@2nd floor==============================================================================================================================

OlivineLighthouse_EventScript_Huey::
	trainerbattle_single TRAINER_HUEY_HNS, OlivineLighthouse_Text_SailorHueySeen, OlivineLighthouse_Text_SailorHueyBeaten, OlivineLighthouse_EventScript_RegisterHuey
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, OlivineLighthouse_EventScript_RematchHuey
	msgbox OlivineLighthouse_Text_SailorHueyAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_RegisterHuey::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox OlivineLighthouse_Text_HueyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_HUEY_HNS
	release
	end

OlivineLighthouse_EventScript_RematchHuey::
	trainerbattle_rematch TRAINER_HUEY_HNS, OlivineLighthouse_Text_HueyRematchIntro, OlivineLighthouse_Text_HueyRematchDefeat
	msgbox OlivineLighthouse_Text_HueyPostRematch, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_GentlemanAlfred::
    trainerbattle_single TRAINER_ALFRED_HNS, OlivineLighthouse_Text_GentlemanAlfredSeen, OlivineLighthouse_Text_GentlemanAlfredBeaten
    msgbox OlivineLighthouse_Text_GentlemanAlfredAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_Text_SailorHueySeen:
	.string "{JPN}うみのおとこたちはいつでもいいしょ\n"
	.string "うぶをもとめている！$"

OlivineLighthouse_Text_SailorHueyBeaten:
	.string "{JPN}うわっ！まけた！$"

OlivineLighthouse_Text_SailorHueyAfter:
	.string "{JPN}なんてすごいちからだ！ぼくといっし\n"
	.string "ょにうみをこうかいしてみないか？$"

OlivineLighthouse_Text_HueyRegister:
	.string "What power! How would you like\n"
	.string "to sail the seas with me?$"

OlivineLighthouse_Text_HueyRematchIntro:
	.string "{JPN}うみのおとこたちはいつでもあついた\n"
	.string "たかいをもとめている！$"

OlivineLighthouse_Text_HueyRematchDefeat:
	.string "{JPN}うわっ！まけた！$"

OlivineLighthouse_Text_HueyPostRematch:
	.string "What power! How would you like\n"
	.string "to sail the seas with me?$"

OlivineLighthouse_Text_GentlemanAlfredSeen:
	.string "{JPN}ん？ここはあそぶばしょじゃないよ。$"

OlivineLighthouse_Text_GentlemanAlfredBeaten:
	.string "{JPN}あ！きみほんきなんだな。$"

OlivineLighthouse_Text_GentlemanAlfredAfter:
	.string "{JPN}とうだいのうえにはとうだいをともし\n"
	.string "つづけているポケモンがいる。\p"
	.string "でもいまはびょうきでふつうのちりょ\n"
	.string "うではなおらないらしい。$"

@3rd floor==============================================================================================================================

OlivineLighthouse_EventScript_BirdKeeperTheo::
    trainerbattle_single TRAINER_THEO_HNS, OlivineLighthouse_Text_BirdKeeperTheoSeen, OlivineLighthouse_Text_BirdKeeperTheoBeaten
    msgbox OlivineLighthouse_Text_BirdKeeperTheoAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_SailorTerrell::
    trainerbattle_single TRAINER_TERRELL_HNS, OlivineLighthouse_Text_SailorTerrellSeen, OlivineLighthouse_Text_SailorTerrellBeaten
    msgbox OlivineLighthouse_Text_SailorTerrellAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_GentlemanPreston::
    trainerbattle_single TRAINER_PRESTON_HNS, OlivineLighthouse_Text_GentlemanPrestonSeen, OlivineLighthouse_Text_GentlemanPrestonBeaten
    msgbox OlivineLighthouse_Text_GentlemanPrestonAfter, MSGBOX_AUTOCLOSE
    end


OlivineLighthouse_Text_BirdKeeperTheoSeen:
	.string "{JPN}なんでここにいるの？ただぼんやりみ\n"
	.string "てるだけ？さっさとかえったほうがい\l"
	.string "いよ！$"

OlivineLighthouse_Text_BirdKeeperTheoBeaten:
	.string "{JPN}ほんとうにびょうきのポケモンのこと\n"
	.string "がしんぱいなんだね……$"

OlivineLighthouse_Text_BirdKeeperTheoAfter:
	.string "{JPN}いったいどうやってうえにいくんだ？\p"
	.string "びょうきのポケモンをたずねたいんだ\n"
	.string "けどあそこへあがれない……$"

OlivineLighthouse_Text_SailorTerrellSeen:
	.string "{JPN}ふなのりたちはしんせつでしかもつよ\n"
	.string "い。きみはどう？$"

OlivineLighthouse_Text_SailorTerrellBeaten:
	.string "{JPN}あなたはやさしくてしかもつよい……$"

OlivineLighthouse_Text_SailorTerrellAfter:
	.string "{JPN}アサギにもどるたびにジムにたちよる\n"
	.string "んだ。\p"
	.string "きづかないうちにジムリーダーのポケ\n"
	.string "モンのタイプがかわっていた。$"

OlivineLighthouse_Text_GentlemanPrestonSeen:
	.string "{JPN}ポケモンをそだてるためにせかいじゅ\n"
	.string "うをたびしています。あなたとしょう\l"
	.string "ぶしたいです。$"

OlivineLighthouse_Text_GentlemanPrestonBeaten:
	.string "{JPN}…はあ…もっとトレーニングしなきゃ\n"
	.string "…$"

OlivineLighthouse_Text_GentlemanPrestonAfter:
	.string "{JPN}ミカンはいぜんイワークのようないわ\n"
	.string "タイプのポケモンをつかっていた。$"

@4th floor==============================================================================================================================

OlivineLighthouse_EventScript_SailorKent::
    trainerbattle_single TRAINER_KENT_HNS, OlivineLighthouse_Text_SailorKentSeen, OlivineLighthouse_Text_SailorKentBeaten
    msgbox OlivineLighthouse_Text_SailorKentAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_LassConnie::
    trainerbattle_single TRAINER_CONNIE_HNS, OlivineLighthouse_Text_LassConnieSeen, OlivineLighthouse_Text_LassConnieBeaten
    msgbox OlivineLighthouse_Text_LassConnieAfter, MSGBOX_AUTOCLOSE
    end


OlivineLighthouse_Text_SailorKentSeen:
	.string "{JPN}ミカンはここのポケモンたちのことを\n"
	.string "しんぱいでたまらないにちがいない。\p"
	.string "さいきんはえがおすらみせない。$"

OlivineLighthouse_Text_SailorKentBeaten:
	.string "{JPN}ぼくもえがおなんてだせないよ……$"

OlivineLighthouse_Text_SailorKentAfter:
	.string "{JPN}びょうきといえばタンバにいいやっき\n"
	.string "ょくがあるってきいたよ。$"

OlivineLighthouse_Text_LassConnieSeen:
	.string "{JPN}ミカンはこのまちのジムリーダーだ。\p"
	.string "かのじょをつれてかえるつもりだ。\p"
	.string "だれもわたしのじゃまをするな！$"

OlivineLighthouse_Text_LassConnieBeaten:
	.string "{JPN}うわっ！わたしのポケモン！$"

OlivineLighthouse_Text_LassConnieAfter:
	.string "{JPN}そうね。じぶんのポケモンがきずつい\n"
	.string "たらだれだってしんぱいになるものよ\l"
	.string "。\p"
	.string "このポケモンたちがげんきになれるよ\n"
	.string "ういのるわ。そうすればミカンもジム\l"
	.string "にもどってこられるから。$"

@5th floor==============================================================================================================================

OlivineLighthouse_EventScript_SailorErnest::
    trainerbattle_single TRAINER_ERNEST_HNS, OlivineLighthouse_Text_SailorErnestSeen, OlivineLighthouse_Text_SailorErnestBeaten
    msgbox OlivineLighthouse_Text_SailorErnestAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_BirdKeeperDenis::
    trainerbattle_single TRAINER_DENIS_HNS, OlivineLighthouse_Text_BirdKeeperDenisSeen, OlivineLighthouse_Text_BirdKeeperDenisBeaten
    msgbox OlivineLighthouse_Text_BirdKeeperDenisAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_Text_SailorErnestSeen:
	.string "{JPN}ミカンとしょうぶしたかったんだけど\n"
	.string "かのじょはいまはそのきじゃないみた\l"
	.string "い。\p"
	.string "じゃあきみはどう？$"

OlivineLighthouse_Text_SailorErnestBeaten:
	.string "{JPN}おっとおっと。きみつよすぎるよ！$"

OlivineLighthouse_Text_SailorErnestAfter:
	.string "{JPN}ジムリーダーとはたんにつよいだけで\n"
	.string "はいけません。\p"
	.string "リーダーにはおもいやりもひつようで\n"
	.string "す。$"

OlivineLighthouse_Text_BirdKeeperDenisSeen:
	.string "{JPN}ここはかなりたかいばしょだね。ぼく\n"
	.string "のとりタイプのポケモンたちはぜっこ\l"
	.string "うちょうだ。$"

OlivineLighthouse_Text_BirdKeeperDenisBeaten:
	.string "{JPN}おっと…クラッシュしちゃった…$"

OlivineLighthouse_Text_BirdKeeperDenisAfter:
	.string "{JPN}ぼくのポケモンはタンバでそらをとぶ\n"
	.string "をおぼえた。\p"
	.string "まけたぼくはそらをとんでうみをわた\n"
	.string "るしかないな……$"

@6th floor==============================================================================================================================

OlivineLighthouse_EventScript_Jasmine::
	lock
	faceplayer
	goto_if_eq VAR_OLIVINE_CITY_STATE, 3, OlivineLighthouse_EventScript_JasmineGoGetPotion
	goto_if_eq VAR_OLIVINE_CITY_STATE, 4, OlivineLighthouse_EventScript_JasmineDeliverPotion
	msgbox OlivineLighthouse_Text_JasmineCianwoodPharmacy, MSGBOX_DEFAULT
	msgbox OlivineLighthouse_Text_JasmineGetMedicine, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 3
	release
	end
OlivineLighthouse_EventScript_JasmineGoGetPotion::
	msgbox OlivineLighthouse_Text_JasmineGetMedicine2, MSGBOX_DEFAULT
	release
	end


OlivineLighthouse_EventScript_Ampharos::
	lock
	faceplayer
	goto_if_lt VAR_OLIVINE_CITY_STATE, 5, OlivineLighthouse_EventScript_AmpharosSick
	fadescreen FADE_TO_WHITE
	playse SE_M_THUNDERBOLT2
	waitse
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPaluPalulu, MSGBOX_DEFAULT
	waitmoncry
	setflag FLAG_AMPHAROS_HEALED
	release
	end

OlivineLighthouse_EventScript_AmpharosSick::
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPalPaloo, MSGBOX_DEFAULT
	waitmoncry
	msgbox OlivineLighthouse_Text_AmphyBreathingLabored, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_JasmineCianwoodPharmacy:
	.string "JASMINE: …This POKéMON always kept\n"
	.string "the sea lit at night.\p"
	.string "…But it suddenly got sick… It's\n"
	.string "gasping for air…\p"
	.string "…I understand that there is a\n"
	.string "wonderful PHARMACY in CIANWOOD…\p"
	.string "But that's across the sea…\n"
	.string "And I can't leave AMPHY unattended…$"

OlivineLighthouse_Text_JasmineGetMedicine:
	.string "…May I ask you to get some medicine\n"
	.string "for me? Please?$"

OlivineLighthouse_Text_JasmineGetMedicine2:
	.string "There is a wonderful PHARMACY\n"
	.string "in CIANWOOD…\p"
	.string "But that's across the sea…\n"
	.string "And I can't leave AMPHY unattended…\p"
	.string "…May I ask you to get some medicine\n"
	.string "for me? Please?$"

OlivineLighthouse_Text_JasmineCureAmphy:
	.string "JASMINE: …Will that medicine cure\n"
	.string "AMPHY?$"


OlivineLighthouse_EventScript_JasmineDeliverPotion::
	msgbox OlivineLighthouse_Text_JasmineCureAmphy, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_JasmineRefuse
	playse SE_USE_ITEM
	removeitem ITEM_SECRET_POTION
	msgbox OlivineLighthouse_Text_PlayerHandedSecretpotion, MSGBOX_DEFAULT
	waitse
	msgbox OlivineLighthouse_Text_JasmineDontBeOffended, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_LIGHTHOUSE_JASMINE, DIR_NORTH
	delay 20
	turnobject LOCALID_LIGHTHOUSE_AMPHAROS, DIR_SOUTH
	playfanfare MUS_HEAL
	waitfanfare
	msgbox OlivineLighthouse_Text_JasmineAmphyHowFeeling, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_M_THUNDERBOLT2
	waitse
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPaluPalulu, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	applymovement LOCALID_LIGHTHOUSE_AMPHAROS, OlivineLighthouse_Movement_Amphy
	waitmovement 0
	applymovement LOCALID_LIGHTHOUSE_JASMINE, OlivineLighthouse_Movement_Jasmine
	msgbox OlivineLighthouse_Text_JasmineThankYou, MSGBOX_DEFAULT
	closemessage

	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_LIGHTHOUSE_JASMINE
	removeobject LOCALID_LIGHTHOUSE_JASMINE
	waitse
	delay 50
	fadescreen FADE_FROM_BLACK
	setvar VAR_SAFARI_ZONE_GATE_STATE, 1
	setvar VAR_OLIVINE_CITY_STATE, 5
	setflag FLAG_AMPHAROS_HEALED
	clearflag FLAG_HIDE_OLIVINE_CITY_GYM_JASMINE
	release
	end

OlivineLighthouse_Movement_Jasmine:
	face_player
	step_end

OlivineLighthouse_Movement_Amphy:
	walk_up
	jump_in_place_down
	jump_in_place_left
	jump_in_place_right
	jump_in_place_up
	face_down
	step_end


OlivineLighthouse_EventScript_JasmineRefuse::
	msgbox OlivineLighthouse_Text_JasmineISee, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PlayerHandedSecretpotion:
	.string "{PLAYER} handed the SECRET POTION to\n"
	.string "JASMINE.$"

OlivineLighthouse_Text_JasmineDontBeOffended:
	.string "JASMINE: …Um, please don't be\n"
	.string "offended…\p"
	.string "…AMPHY will not take anything from\n"
	.string "anyone but me…$"

OlivineLighthouse_Text_JasmineAmphyHowFeeling:
	.string "JASMINE: …\p"
	.string "AMPHY, how are you feeling?$"

OlivineLighthouse_Text_JasmineThankYou:
	.string "JASMINE: …Oh, I'm so relieved…\p"
	.string "This is just so wonderful…\p"
	.string "Thank you so very, very much.\p"
	.string "…I will return to the GYM…\p"
	.string "I'll also warn you, STEEL types\n"
	.string "are powerful.$"

OlivineLighthouse_Text_JasmineISee:
	.string "JASMINE: …I see…\n"
	.string "…AMPHY, hang on!$"

OlivineLighthouse_Text_AmphyPalPaloo:
	.string "AMPHY: …\n"
	.string "…Pa… paloo…$"

OlivineLighthouse_Text_AmphyBreathingLabored:
	.string "Its breathing is terribly\n"
	.string "labored…$"

OlivineLighthouse_Text_AmphyPaluPalulu:
	.string "AMPHY: Palu! Palulu!$"


