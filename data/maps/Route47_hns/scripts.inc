Route47_hns_MapScripts::
	.byte 0


Route47_EventScript_Hiker::
	trainerbattle_single TRAINER_DEVIN_HNS, Route47_Text_HikerSeen, Route47_Text_HikerBeaten
	msgbox Route47_Text_HikerAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_HikerSeen::
	.string "{JPN}たにんをこいしくおもうきもちという\n"
	.string "のは……まあそういうものですね。\p"
	.string "でもたたかいはたたかいですからさあ\n"
	.string "いこう！$"

Route47_Text_HikerBeaten::
	.string "{JPN}ワハハ！$"

Route47_Text_HikerAfter::
	.string "{JPN}しょうぶののちはかならずわらいなが\n"
	.string "らそのばをさるようにしましょう！$"

Route47_EventScript_Camper::
	trainerbattle_single TRAINER_GRANT_HNS, Route47_Text_CamperSeen, Route47_Text_CamperBeaten
	msgbox Route47_Text_CamperAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_CamperSeen::
	.string "{JPN}ひとごみはにがてだからポケモンとい\n"
	.string "っしょにここでキャンプしてるんだ！$"

Route47_Text_CamperBeaten::
	.string "{JPN}やまおくのほうへすすんでいくべきな\n"
	.string "んだろうな……$"

Route47_Text_CamperAfter::
	.string "{JPN}じゃあね！$"

Route47_EventScript_Thom::
	trainerbattle_double TRAINER_THOM_AND_KAE_HNS, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Kae::
	trainerbattle_double TRAINER_THOM_AND_KAE_HNS, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple1Seen::
	.string "{JPN}トム:1プラス1は2だ。でもぼくたち\n"
	.string "ふたりがいっしょになればもっとつよ\l"
	.string "くなる！\p"
	.string "カエ:わたしたちふたりなんてただの\n"
	.string "つまらないペアなんかじゃないわ！$"

Route47_Text_Couple1Beaten::
	.string "{JPN}トム:おもってたのとはちがうな。カ\n"
	.string "エ:あなたもちょっとかわってるわね\l"
	.string "！$"

Route47_Text_Couple1After1::
	.string "THOM: It seems your power is\n"
	.string "impossible to predict!$"

Route47_Text_Couple1After2::
	.string "KAE: I figured you were an ordinary\n"
	.string "lone trainer. Boy was I wrong!$"

Route47_EventScript_Duff::
	trainerbattle_double TRAINER_DUFF_AND_EDA_HNS, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple2After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Eda::
	trainerbattle_double TRAINER_DUFF_AND_EDA_HNS, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox Route47_Text_Couple2After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple2Seen::
	.string "{JPN}ダフ:かのじょをみまもっているとむ\n"
	.string "ねがおどるよ！\p"
	.string "エダ:かれしへのおもいはうみのよう\n"
	.string "にひろくてふかい！$"

Route47_Text_Couple2Beaten::
	.string "{JPN}ダフ:きみにはかなわなかったな……\n"
	.string "エダ:きみはほんとうにすごいな……$"

Route47_Text_Couple2After1::
	.string "DUFF: Thank you for the awe-\n"
	.string "inspiring battle! Bye!$"

Route47_Text_Couple2After2::
	.string "EDA: You should really find a\n"
	.string "wonderful partner, too!$"

Route47_EventScript_Sage::
	lock
	faceplayer
	msgbox EmbeddedTower_Text_OldManIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

EmbeddedTower_Text_OldManIntro:
	.string "Well, hello!\p"
	.string "It's said that past this hole used to\n"
	.string "be a huge tower reaching far into\l"
	.string "the sky.\p"
	.string "They say that it was a rather strange\n"
	.string "tower with half of it embedded\l"
	.string "in the cliff.\p"
	.string "It was not just a tall tower reaching\n"
	.string "up to the sky, but also reaching deep\l"
	.string "down underground!\p"
	.string "It is rumored that it even reached\n"
	.string "the bottom of the ocean!\p"
	.string "In short, the ruins used to connect\n"
	.string "the sky, the land, and the sea to\l"
	.string "each other...\p"
	.string "Most of the tower is now crumbled,\n"
	.string "and the only things that remain are\l"
	.string "the entrance and its interior, where\l"
	.string "you'll see strange patterns.$"

Route47_EventScript_Item_Pearl::
    finditem ITEM_PEARL
    end

Route47_EventScript_Item_Revive::
    finditem ITEM_REVIVE
    end

Route47_EventScript_Item_WhiteFlute::
    finditem ITEM_WHITE_FLUTE
    end

Route47_EventScript_Item_Stardust::
	finditem ITEM_STARDUST
	end

Route47_EventScript_Item_LuckyPunch::
	finditem ITEM_LUCKY_PUNCH
	end

Route47_EventScript_Chinchou::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHINCHOU, CRY_MODE_NORMAL
	msgbox Route47_Text_Chinchou, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route47_Text_Chinchou:
	.string "CHINCHOU: Chou!$"
