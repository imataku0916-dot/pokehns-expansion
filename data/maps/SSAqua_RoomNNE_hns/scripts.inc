SSAqua_RoomNNE_hns_MapScripts::
	.byte 0

SSAqua_RoomNNE_EventScript_Sean::
	trainerbattle_single TRAINER_SEAN_HNS, SSAqua_RoomNNE_Text_CooltrainermSeanSeen, SSAqua_RoomNNE_Text_CooltrainermSeanBeaten
	msgbox SSAqua_RoomNNE_Text_CooltrainermSeanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNNE_EventScript_Carol::
	trainerbattle_single TRAINER_CAROL_HNS, SSAqua_RoomNNE_Text_CooltrainerfCarolSeen, SSAqua_RoomNNE_Text_CooltrainerfCarolBeaten
	msgbox SSAqua_RoomNNE_Text_CooltrainerfCarolAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNNE_Text_CooltrainermSeanSeen:
    .string "{JPN}じぶんのうでをためすためにカントー\n"
    .string "へいくつもりだ。$"

SSAqua_RoomNNE_Text_CooltrainermSeanBeaten:
    .string "{JPN}かちたかったんだ！$"

SSAqua_RoomNNE_Text_CooltrainermSeanAfterBattle:
    .string "Trainers from JOHTO\n"
    .string "can battle with KANTO\l"
    .string "GYM LEADERS.$"

SSAqua_RoomNNE_Text_CooltrainerfCarolSeen:
    .string "{JPN}わたしはチャンピオンになるためにト\n"
    .string "レーニングなかだ！$"

SSAqua_RoomNNE_Text_CooltrainerfCarolBeaten:
    .string "{JPN}わたしたちなにがそんなにちがうの？$"

SSAqua_RoomNNE_Text_CooltrainerfCarolAfterBattle:
    .string "I'm going to beat\n"
    .string "you someday!$"
