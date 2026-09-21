RuinsOfAlph_Outside_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RuinsOfAlph_Outside_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

RuinsOfAlph_Outside_OnTransition: 
	callnative SetTimeBasedEncounters
	end	

RuinsOfAlph_Outside_EventScript_Quagsire::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_NORMAL
	msgbox RuinsOfAlph_Outside_Text_Quagsire, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RuinsOfAlph_Outside_Text_Quagsire:
	.string "QUAGSIRE: Quag Quag$"

RuinsOfAlph_Outside_EventScript_Stan::
	trainerbattle_single TRAINER_STAN_HNS, RuinsOfAlph_Outside_Text_SuperNerdStan_Seen, RuinsOfAlph_Outside_Text_SuperNerdStan_Beaten
	msgbox RuinsOfAlph_Outside_Text_SuperNerdStan_After, MSGBOX_AUTOCLOSE
	end

RuinsOfAlph_Outside_EventScript_Nathan::
	trainerbattle_single TRAINER_NATHAN_HNS, RuinsOfAlph_Outside_Text_PsychicNathan_Seen, RuinsOfAlph_Outside_Text_PsychicNathan_Beaten
	msgbox RuinsOfAlph_Outside_Text_PsychicNathan_After, MSGBOX_AUTOCLOSE
	end

RuinsOfAlph_Outside_EventScript_Youngster1::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Youngster2::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Fisher1::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Fisher1, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Fisher2::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Fisher2, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign1::
	lock
	msgbox RuinsOfAlph_Outside_Text_MainSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign2::
	lock
	msgbox RuinsOfAlph_Outside_Text_ResearchSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign3::
	lock
	msgbox RuinsOfAlph_Outside_Text_MysteryChamberSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_Text_Scientist:
	.string "Hm? That's a POKéDEX, isn't it?\n"
	.string "May I see it?\p"
	.string "There are so many kinds of\n"
	.string "POKéMON.\p"
	.string "Hm? What's this?\p"
	.string "What is this POKéMON?\p"
	.string "It looks like the strange\n"
	.string "writing on the walls of the\p"
	.string "RUINS.\p"
	.string "If those drawings are really\n"
	.string "POKéMON, there should be many\n"
	.string "more.\p"
	.string "I know! Let me upgrade your\n"
	.string "POKéDEX. Follow me.$"

RuinsOfAlph_Outside_Text_SuperNerdStan_Seen:
	.string "{JPN}なにがよう？いまべんきょうちゅうな\n"
	.string "んだ……じゃましないで！$"

RuinsOfAlph_Outside_Text_SuperNerdStan_Beaten:
	.string "{JPN}ごめん……ぼくたちには\p"
	.string "ほんとうのりかいがかけていることに\n"
	.string "もどかしいんだ……$"

RuinsOfAlph_Outside_Text_SuperNerdStan_After:
	.string "{JPN}このいせきはやく1500ねんまえにた\n"
	.string "てられたものです。\p"
	.string "だれがたてたのかはだれにもわかりま\n"
	.string "せん。\p"
	.string "またポケモンのぞうになにかいみがあ\n"
	.string "るのかどうかもふめいです。\p"
	.string "すべてがおおきななぞにつつまれてい\n"
	.string "ます……$"

RuinsOfAlph_Outside_Text_PsychicNathan_Seen:
	.string "{JPN}うーん……ここはふしぎなばしょだな\n"
	.string "。$"

RuinsOfAlph_Outside_Text_PsychicNathan_Beaten:
	.string "{JPN}…$"

RuinsOfAlph_Outside_Text_PsychicNathan_After:
	.string "{JPN}ここでかんがえるのがすきだ。$"

RuinsOfAlph_Outside_Text_MysteryChamberSign:
	.string "MYSTERY STONE PANEL CHAMBER$"

RuinsOfAlph_Outside_Text_MainSign:
	.string "RUINS OF ALPH\n"
	.string "VISITORS WELCOME$"

RuinsOfAlph_Outside_Text_ResearchSign:
	.string "RUINS OF ALPH RESEARCH CENTER\p"
	.string "THE AUTHORITY ON THE\n"
	.string "RUINS OF ALPH$"

RuinsOfAlph_Outside_Text_Fisher1:
	.string "While exploring the RUINS, we\n"
	.string "suddenly noticed an odd presence.\p"
	.string "We all got scared and ran away.\n"
	.string "You should be careful too.$"

RuinsOfAlph_Outside_Text_Fisher2:
	.string "The RUINS hide a huge secret!\p"
	.string "…I think…$"

RuinsOfAlph_Outside_Text_Youngster1:
	.string "There are many kinds of UNOWN, so\n"
	.string "we use them for our secret codes.$"

RuinsOfAlph_Outside_Text_Youngster2:
	.string "A… H… E… A… D… Hmm…\p"
	.string "What?\p"
	.string "I'm decoding this message!$"
