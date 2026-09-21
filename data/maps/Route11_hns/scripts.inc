Route11_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route11_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route11_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN_HNS, Route11_Text_YoungsterOwenSeen, Route11_Text_YoungsterOwenBeaten
	msgbox Route11_Text_YoungsterOwenAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Jason::
	trainerbattle_single TRAINER_JASON_HNS, Route11_Text_YoungsterJasonSeen, Route11_Text_YoungsterJasonBeaten
	msgbox Route11_Text_YoungsterJasonAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN_HNS, Route11_Text_PsychicHermanSeen, Route11_Text_PsychicHermanBeaten
	msgbox Route11_Text_PsychicHermanAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Fidel::
	trainerbattle_single TRAINER_FIDEL_HNS, Route11_Text_PsychicFidelSeen, Route11_Text_PsychicFidelBeaten
	msgbox Route11_Text_PsychicFidelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Engineer::
	msgbox Route11_Text_Engineer, MSGBOX_NPC
	end

Route11_EventScript_Item_Grass_Knot::
    finditem ITEM_TM_GRASS_KNOT
    end

Route11_Text_Engineer:
	.string "I saw a strange POKéMON climbing\n"
	.string "in the trees, but it didn't\l"
	.string "look like MANKEY...$"

Route11_Text_YoungsterOwenSeen:
	.string "{JPN}ポケモンにはチートはありえません。\p"
	.string "フェアにたたかいましょう！$"

Route11_Text_YoungsterOwenBeaten:
	.string "{JPN}えっ？どうしてこうなったの？$"

Route11_Text_YoungsterOwenAfterBattle:
	.string "I fought fair and square with\n"
	.string "honor.\p"
	.string "I don't regret this at all.$"

Route11_Text_YoungsterJasonSeen:
	.string "{JPN}くさむらでショートパンツをはいてい\n"
	.string "るとすこしかゆくてくすぐったいかん\l"
	.string "じがする。$"

Route11_Text_YoungsterJasonBeaten:
	.string "{JPN}あーっ！ふみつぶされた！$"

Route11_Text_YoungsterJasonAfterBattle:
	.string "I'm going to catch more POKéMON in\n"
	.string "the grass.$"

Route11_Text_PsychicHermanSeen:
	.string "{JPN}…$"

Route11_Text_PsychicHermanBeaten:
	.string "{JPN}…$"

Route11_Text_PsychicHermanAfterBattle:
	.string "…\p"
	.string "I lost while I had my eyes closed…$"

Route11_Text_PsychicFidelSeen:
	.string "{JPN}みえるよ……\p"
	.string "きみのすべてが……$"

Route11_Text_PsychicFidelBeaten:
	.string "{JPN}きみのちからなどよそうもしていなか\n"
	.string "った……$"

Route11_Text_PsychicFidelAfterBattle:
	.string "Strength in conviction…\p"
	.string "You're strong because you believe\n"
	.string "in your POKéMON.$"

Route11_Text_Sign:
	.string "ROUTE 11$"

