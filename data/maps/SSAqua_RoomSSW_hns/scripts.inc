SSAqua_RoomSSW_hns_MapScripts::
	.byte 0

SSAqua_RoomSSW_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE_HNS, SSAqua_RoomSSW_Text_FirebreatherLyleSeen, SSAqua_RoomSSW_Text_FirebreatherLyleBeaten
	msgbox SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSSW_EventScript_Ken::
	trainerbattle_single TRAINER_KEN_HNS, SSAqua_RoomSSW_Text_BugCatcherKenSeen, SSAqua_RoomSSW_Text_BugCatcherKenBeaten
	msgbox SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSSW_Text_FirebreatherLyleSeen:
    .string "{JPN}ひをはくショーをするためにカントー\n"
    .string "にいくよ！$"

SSAqua_RoomSSW_Text_FirebreatherLyleBeaten:
    .string "{JPN}パチパチ……ほのおがちーさすぎる…\n"
    .string "…$"

SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle:
    .string "I guess fire is weak on the sea.\n"
    .string "It doesn't matter? Really?$"

SSAqua_RoomSSW_Text_BugCatcherKenSeen:
    .string "{JPN}おばあちゃんのいえにいってむしをつ\n"
    .string "かまえにいくんだ！$"

SSAqua_RoomSSW_Text_BugCatcherKenBeaten:
    .string "{JPN}おぉすごい。きみつよいね！$"

SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle:
    .string "You can find lots of POKéMON\n"
    .string "in the trees of JOHTO!$"
