MtMortar_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar_2F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar_2F_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtMortar_2F_EventScript_Item_Iron::
    finditem ITEM_IRON
    end

MtMortar_2F_EventScript_Item_MaxRevive::
    finditem ITEM_MAX_REVIVE
    end

MtMortar_2F_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

MtMortar_2F_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

MtMortar_2F_EventScript_Item_DragonScale::
    finditem ITEM_DRAGON_SCALE
    end

MtMortar_2F_EventScript_Item_Elixir::
    finditem ITEM_ELIXIR
    end

MtMortar_2F_EventScript_Nerd::
	trainerbattle_single TRAINER_HUGH_HNS, MtMortar_2F_Text_SupernerdHughSeen, MtMortar_2F_Text_SupernerdHughBeaten
	msgbox MtMortar_2F_Text_SupernerdHughAfter, MSGBOX_AUTOCLOSE
	end

MtMortar_2F_Text_SupernerdHughSeen::
	.string "{JPN}おい！マーカス！$"

MtMortar_2F_Text_SupernerdHughBeaten:
	.string "{JPN}ごめんなさいわたしのミスでした。あ\n"
	.string "なたをごかいしていました。$"

MtMortar_2F_Text_SupernerdHughAfter:
	.string "{JPN}スリバチやまのことをしらべてるんだ\n"
	.string "けどあいぼうがゆくえふめいになっち\l"
	.string "ゃった。\p"
	.string "かいりきをつかえるヤドンをつれてい\n"
	.string "るトレーナーをみかけなかった？$"
