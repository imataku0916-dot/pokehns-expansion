SSAqua_B1F_hns_MapScripts::
	.byte 0

SSAqua_B1F_EventScript_Trigger::
	lock
	turnobject LOCALID_SSAQUA_B1F_SAILORLOOKING, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox SSAqua_B1F_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0 
	turnobject LOCALID_SSAQUA_B1F_SAILORLOOKING, DIR_SOUTH
	release
	end

SSAqua_B1F_EventScript_SailorLookingForBuddy::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SSAQUA_SAILOR, SSAqua_B1F_EventScript_SailorLookingFoundBuddy
	msgbox SSAqua_B1F_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua_B1F_EventScript_SailorLookingFoundBuddy::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorThanks, MSGBOX_DEFAULT
	goto_if_lt VAR_SSAQUA_STATE, 5, SSAqua_B1F_EventScript_SailorGirl
	closemessage
	release
	end
SSAqua_B1F_EventScript_SailorGirl::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorSawGirl, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua_B1F_EventScript_SleepySailor::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorDirections, MSGBOX_NPC
	end

SSAqua_B1F_EventScript_Barfcan::
	msgbox SSAqua_B1F_Text_BarfCan, MSGBOX_SIGN
	end

SSAqua_B1F_Text_BarfCan:
    .string "Yuck!\n"
    .string "Shouldn't have looked!$"

SSAqua_B1F_Text_FastShipOnDutySailor:
	.string "Hey, kid. Could I get you to\n"
	.string "look for my buddy?\p"
	.string "He's goofing off somewhere,\n"
	.string "that lazy bum!\p"
	.string "I want to go find him, but I'm\n"
	.string "on duty right now.$"

SSAqua_B1F_Text_FastShipOnDutySailorRefused:
	.string "Oh, gee…\p"
	.string "The CAPTAIN will be furious…$"

SSAqua_B1F_Text_FastShipOnDutySailorThanks:
	.string "Thanks, kid! I chewed him out\n"
	.string "good so he'll quit slacking off!$"

SSAqua_B1F_Text_FastShipOnDutySailorSawGirl:
	.string "A little girl?\p"
	.string "I may have seen her go by here.$"

SSAqua_B1F_Text_FastShipOnDutySailorDirections:
	.string "The dining room is up ahead.\p"
	.string "The stairs at the end lead to\n"
	.string "the CAPTAIN's cabin.$"

SSAqua_B1F_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF_HNS, SSAqua_B1F_Text_SailorJeffSeen, SSAqua_B1F_Text_SailorJeffBeaten
	msgbox SSAqua_B1F_Text_SailorJeffAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorJeffSeen:
	.string "{JPN}きゅうけいじかんにはしょうぶにまさ\n"
	.string "るものはないね。$"

SSAqua_B1F_Text_SailorJeffBeaten:
	.string "{JPN}かってもまけてもきゅうけいじかんは\n"
	.string "もうおわりだ！$"

SSAqua_B1F_Text_SailorJeffAfter:
	.string "{JPN}ほんきをださないとかてないみたいだ\n"
	.string "。$"

SSAqua_B1F_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA_HNS, SSAqua_B1F_Text_PicnickerDebraSeen, SSAqua_B1F_Text_PicnickerDebraBeaten
	msgbox SSAqua_B1F_Text_PicnickerDebraAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_PicnickerDebraSeen:
	.string "{JPN}すごくたいくつだ。しょうぶしない？$"

SSAqua_B1F_Text_PicnickerDebraBeaten:
	.string "{JPN}うわっ！つよすぎるぞ！$"

SSAqua_B1F_Text_PicnickerDebraAfter:
	.string "{JPN}ヤマブキタマムシ……カントーにはお\n"
	.string "おきなまちがたくさんあるらしいね。$"

SSAqua_B1F_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ_HNS, SSAqua_B1F_Text_JugglerFritzSeen, SSAqua_B1F_Text_JugglerFritzBeaten
	msgbox SSAqua_B1F_Text_JugglerFritzAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_JugglerFritzSeen:
	.string "{JPN}ううっ…ふなよいしちゃった！$"

SSAqua_B1F_Text_JugglerFritzBeaten:
	.string "{JPN}もううごけない……$"

SSAqua_B1F_Text_JugglerFritzAfter:
	.string "{JPN}もうふねはごめんだ。つぎは\p"
	.string "リニアにのるぞ。$"

SSAqua_B1F_EventScript_Garrett::
	trainerbattle_single TRAINER_GARRETT_HNS, SSAqua_B1F_Text_SailorGarrettSeen, SSAqua_B1F_Text_SailorGarrettBeaten
	msgbox SSAqua_B1F_Text_SailorGarrettAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorGarrettSeen:
	.string "{JPN}ここがおれたちふなのりたちのしょく\n"
	.string "ばだ！$"

SSAqua_B1F_Text_SailorGarrettBeaten:
	.string "{JPN}ホームグラウンドでまけてしまった…\n"
	.string "…$"

SSAqua_B1F_Text_SailorGarrettAfter:
	.string "{JPN}クチバシティから\p"
	.string "アサギシティへむかうとちゅうさまざ\n"
	.string "まなじょうきゃくがのりこんでくる。$"

SSAqua_B1F_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH_HNS, SSAqua_B1F_Text_FisherJonahSeen, SSAqua_B1F_Text_FisherJonahBeaten
	msgbox SSAqua_B1F_Text_FisherJonahAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_FisherJonahSeen:
	.string "{JPN}うみのじょうなのにつりができないな\n"
	.string "んて！\p"
	.string "つまらない！しょうぶしよう！$"

SSAqua_B1F_Text_FisherJonahBeaten:
	.string "{JPN}わたし…もうたいくつじゃないよ…$"

SSAqua_B1F_Text_FisherJonahAfter:
	.string "{JPN}クチバしまのさんばしでつりをするつ\n"
	.string "もりだ。$"

SSAqua_B1F_EventScript_Wai::
	trainerbattle_single TRAINER_WAI_HNS, SSAqua_B1F_Text_BlackbeltWaiSeen, SSAqua_B1F_Text_BlackbeltWaiBeaten
	msgbox SSAqua_B1F_Text_BlackbeltWaiAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_BlackbeltWaiSeen:
	.string "{JPN}ふねのゆれに\p"
	.string "からだをあずけてきゃくりょくをきた\n"
	.string "えているんだ！$"

SSAqua_B1F_Text_BlackbeltWaiBeaten:
	.string "{JPN}ガタガタゆれてころがりおちた！$"

SSAqua_B1F_Text_BlackbeltWaiAfter:
	.string "{JPN}ジョウトちほうでからてのおうさまが\n"
	.string "みつからなかった。\p"
	.string "かれはどこかのどうくつでしゅぎょう\n"
	.string "ちゅうらしい。$"

SSAqua_B1F_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH_HNS, SSAqua_B1F_Text_SailorKennethSeen, SSAqua_B1F_Text_SailorKennethBeaten
	msgbox SSAqua_B1F_Text_SailorKennethAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorKennethSeen:
	.string "{JPN}おれはふなのりだ！\p"
	.string "でもチャンピオンになるためにポケモ\n"
	.string "ンをそだててるんだ！$"

SSAqua_B1F_Text_SailorKennethBeaten:
	.string "{JPN}わたしのくんれんぶそくはあきらかだ\n"
	.string "…$"

SSAqua_B1F_Text_SailorKennethAfter:
	.string "{JPN}8つのバッジ！これらはきみが\p"
	.string "ジムリーダーたちをたおしたことをし\n"
	.string "ょうめいするものだ。\p"
	.string "きみがこんなにつよいのもなっとくだ\n"
	.string "！$"

SSAqua_B1F_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY_HNS, SSAqua_B1F_Text_TeacherShirleySeen, SSAqua_B1F_Text_TeacherShirleyBeaten
	msgbox SSAqua_B1F_Text_TeacherShirleyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_TeacherShirleySeen:
	.string "{JPN}わたしのせいとたちにてをだすな！$"

SSAqua_B1F_Text_TeacherShirleyBeaten:
	.string "{JPN}うわっ！$"

SSAqua_B1F_Text_TeacherShirleyAfter:
	.string "{JPN}わたしたちはキキョウのこうがいにあ\n"
	.string "るいせきへえんそくにきています。$"

SSAqua_B1F_EventScript_Nate::
	trainerbattle_single TRAINER_NATE_HNS, SSAqua_B1F_Text_SchoolboyNateSeen, SSAqua_B1F_Text_SchoolboyNateBeaten
	msgbox SSAqua_B1F_Text_SchoolboyNateAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyNateSeen:
	.string "{JPN}アルフのいせきをごぞんじですか？$"

SSAqua_B1F_Text_SchoolboyNateBeaten:
	.string "{JPN}ヤアアッ！$"

SSAqua_B1F_Text_SchoolboyNateAfter:
	.string "{JPN}いせきのなかでラジオがきみょうなし\n"
	.string "んごうをひろっている。$"

SSAqua_B1F_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY_HNS, SSAqua_B1F_Text_SchoolboyRickySeen, SSAqua_B1F_Text_SchoolboyRickyBeaten
	msgbox SSAqua_B1F_Text_SchoolboyRickyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyRickySeen:
	.string "{JPN}アルフのいせきにはきみょうなせきば\n"
	.string "んがいくつかあります。$"

SSAqua_B1F_Text_SchoolboyRickyBeaten:
	.string "{JPN}やられた！$"

SSAqua_B1F_Text_SchoolboyRickyAfter:
	.string "{JPN}あのせきばんは4まいあるってよんだ\n"
	.string "んだけど。$"

