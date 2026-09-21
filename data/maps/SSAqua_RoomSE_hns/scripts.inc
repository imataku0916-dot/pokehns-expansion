SSAqua_RoomSE_hns_MapScripts::
	.byte 0

SSAqua_RoomSE_EventScript_Colin::
	trainerbattle_single TRAINER_COLIN_HNS, SSAqua_RoomSE_Text_PokefanmColinSeen, SSAqua_RoomSE_Text_PokefanmColinBeaten
	msgbox SSAqua_RoomSE_Text_PokefanmColinAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_EventScript_Meg::
	trainerbattle_double TRAINER_MEG_AND_PEG_HNS, SSAqua_RoomSE_Text_TwinsMegandpeg1Seen, SSAqua_RoomSE_Text_TwinsMegandpeg1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAqua_RoomSE_Text_TwinsMegandpeg1After, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_EventScript_Peg::
	trainerbattle_double TRAINER_MEG_AND_PEG_HNS, SSAqua_RoomSE_Text_TwinsMegandpeg2Seen, SSAqua_RoomSE_Text_TwinsMegandpeg2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAqua_RoomSE_Text_TwinsMegandpeg2After, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_Text_PokefanmColinSeen:
    .string "{JPN}おいぼうや！おれとしょうぶしないか\n"
    .string "？$"

SSAqua_RoomSE_Text_PokefanmColinBeaten:
    .string "{JPN}つよいね！$"

SSAqua_RoomSE_Text_PokefanmColinAfter:
    .string "{JPN}ひとりでたびしてるの？おかあさんは\n"
    .string "しんぱいしないの？$"

SSAqua_RoomSE_Text_TwinsMegandpeg1Seen:
    .string "{JPN}わたしをこどもだとおもってるの？そ\n"
    .string "んなのふこうへいだよ！$"

SSAqua_RoomSE_Text_TwinsMegandpeg1Beaten:
    .string "{JPN}おっと！まけた！$"

SSAqua_RoomSE_Text_TwinsMegandpeg1After:
    .string "{JPN}ベイビーなんてわたしたちおんなのこ\n"
    .string "をよぶにはしつれいなよびかたよ！$"

SSAqua_RoomSE_Text_TwinsMegandpeg2Seen:
    .string "{JPN}わたしはあかちゃんじゃないわ！おじ\n"
    .string "ょうさんにそんなこというのはしつれ\l"
    .string "いよ！$"

SSAqua_RoomSE_Text_TwinsMegandpeg2Beaten:
    .string "{JPN}おっと！まけた！$"

SSAqua_RoomSE_Text_TwinsMegandpeg2After:
    .string "{JPN}こどものほうがおとなよりかしこいこ\n"
    .string "ともあるんだ！$"
