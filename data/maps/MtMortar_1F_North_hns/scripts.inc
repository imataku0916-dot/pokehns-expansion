MtMortar_1F_North_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar_1F_North_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar_1F_North_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtMortar_1F_North_EventScript_Item_MaxRepel::
    finditem ITEM_MAX_REPEL
    end

MtMortar_1F_North_EventScript_Item_EscapeRope::
    finditem ITEM_ESCAPE_ROPE
    end

MtMortar_1F_North_EventScript_Item_MaxPotion::
    finditem ITEM_MAX_POTION
    end

MtMortar_1F_North_EventScript_Item_Protector::
    finditem ITEM_PROTECTOR
    end

MtMortar_1F_North_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

MtMortar_1F_North_EventScript_Item_FullIncense::
    finditem ITEM_REVIVE
    end

MtMortar_1F_North_EventScript_Item_KingsRock::
    finditem ITEM_KINGS_ROCK
    end

MtMortar_1F_North_EventScript_Miller::
	trainerbattle_single TRAINER_MILLER_HNS, MountMortar2_Text_PokemaniacMillerSeen, MountMortar2_Text_PokemaniacMillerBeaten
	msgbox MountMortar2_Text_PokemaniacMillerAfter, MSGBOX_AUTOCLOSE
	end

MtMortar_1F_North_EventScript_Markus::
	trainerbattle_single TRAINER_MARKUS_HNS, MountMortar2_Text_SupernerdMarkusSeen, MountMortar2_Text_SupernerdMarkusBeaten
	msgbox MountMortar2_Text_SupernerdMarkusAfter, MSGBOX_AUTOCLOSE
	end

MountMortar2_Text_PokemaniacMillerSeen:
	.string "{JPN}こんかいはぜったいにまけないぞ！$"

MountMortar2_Text_PokemaniacMillerBeaten:
	.string "{JPN}ガキにまけたのか……？$"

MountMortar2_Text_PokemaniacMillerAfter:
	.string "{JPN}すこしまえあるからてのおとこがしょ\n"
	.string "うぶをしかけてきたんだ。\p"
	.string "あいつとんでもなくつよかった。おれ\n"
	.string "たちはかんぷなきまでにやられたよ。\p"
	.string "かれはしゅぎょうのためだといってさ\n"
	.string "らにおくへとすすんでいった。\p"
	.string "あいついまどうしてるのかな？$"

MountMortar2_Text_SupernerdMarkusSeen:
	.string "{JPN}おい！ヒュー！$"

MountMortar2_Text_SupernerdMarkusBeaten:
	.string "{JPN}きみをほかのにんとまちがえてしまっ\n"
	.string "た……$"

MountMortar2_Text_SupernerdMarkusAfter:
	.string "{JPN}スリバチやまをたんさくしにきたんだ\n"
	.string "けどパートナーとはなれはなれになっ\l"
	.string "ちゃって……\p"
	.string "たきのぼりをおぼえたセアドラをつか\n"
	.string "っているトレーナーにあいませんでし\l"
	.string "たか？$"
